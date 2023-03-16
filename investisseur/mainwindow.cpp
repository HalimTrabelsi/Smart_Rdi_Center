#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "investisseurs.h"
#include "QtDebug"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) ,
     ui(new Ui::MainWindow)
{

     ui->setupUi(this);

     ui->tableInvest->setModel(Etmp.showInvest());
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_add_clicked()
{
    QString nomInv  = ui->nom_Inv->text();
    QDate dateInv = ui->date_Invest->date();
    QString descInv = ui->desc_Invest->text();
    double budgetInv =ui->budget_Invest->text().toInt();

    investisseurs newInvester(nomInv,descInv,budgetInv,dateInv);

    bool test=newInvester.createInvest();


    if(test)
    {    //Refresh table after adding

        //ui->tableInvest->setModel(Etmp.showInvest());

       QMessageBox::information(nullptr,QObject::tr("ajout validé"),
                                QObject::tr("Ajout effectué\n""Click cancel to exit."),QMessageBox::Cancel);



    }
else
        QMessageBox::critical(nullptr,QObject::tr("ajout non validé"),
                              QObject::tr("ajout non affectué.\n""Click cancel to exit"),QMessageBox::Cancel);
}

void MainWindow::on_pushButton_delete_clicked()
{
    QString nomInv = ui->DeleteName->text();
    QDate dateInv = ui->DeleteDate->date();

    bool test=Etmp.deleteInvest(nomInv,dateInv);

    if(test)
    {
        ui->tableInvest->setModel(Etmp.showInvest());

        QMessageBox::information(nullptr,QObject::tr("supression validé"),
                                 QObject::tr("suppression effectué\n""Click cancel to exit."),QMessageBox::Cancel);


    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("suppression validé"),
                              QObject::tr("suppression non affectué.\n""Click cancel to exit"),QMessageBox::Cancel);


    }


}

void  MainWindow::on_pb_update_clicked()
{
    QString nomInv  = ui->nom_Inv->text();
    QDate dateInv = ui->date_Invest->date();
    QString descInv = ui->desc_Invest->text();
    int budgetInv =ui->budget_Invest->text().toInt();
    QString searchId =ui->searchID->text();
    investisseurs newInvester(nomInv,descInv,budgetInv,dateInv);

    if (newInvester.showInvest()->rowCount()!=0 and searchId.length()!=0)
        {              bool test = newInvester.updateInvest(searchId);
                                   if(test){
                                       MainWindow w;
                                   w.show();
                                   QMessageBox::information(nullptr, QObject::tr("database is open"),
                                               QObject::tr("Modification effectué.\n"
                                                           "Click Cancel to exit."), QMessageBox::Cancel);
                                   ui->tableInvest->setModel(Etmp.showInvest());
                               }
                               else
                                   QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                               QObject::tr("Modification non effectué.\n"
                                                           "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {QMessageBox::critical(nullptr, QObject::tr("ERREUR"),
                       QObject::tr("Modification non effectué !\n"
                         "Cliquer sur Cancel to exit."), QMessageBox::Cancel);}


                    ui->tableInvest->setModel(Etmp.showInvest());
         }







