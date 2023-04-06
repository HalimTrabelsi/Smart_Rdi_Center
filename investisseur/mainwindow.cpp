#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "investisseurs.h"
#include "QtDebug"
#include <QMessageBox>
#include <QCheckBox>
#include <QPrinter>
#include <QFileDialog>
#include <QPainter>
#include <QPageSize>
#include <QMarginsF>
#include<QPrintDialog>
#include<QPdfWriter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) ,
     ui(new Ui::MainWindow)
{

     ui->setupUi(this);

     ui->tableInvest->setModel(Etmp.showInvest());
     connect(ui->pushButton_export, SIGNAL(clicked()), this, SLOT(on_pushButton_export_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


//---------------CRUD-----------------------------
                        //ADD

void MainWindow::on_pushButton_add_clicked()
{       QRegExp rx("^[A-Za-z ]+$");
        QDoubleValidator validator(0, 1000000000, 2);
        int pos = 0;


        QString nomInv = ui->nom_Inv->text();
        if (nomInv.isEmpty() || !rx.exactMatch(nomInv) ) {
            QMessageBox::critical(nullptr, "Error", "Description invalide");
            return;
        }

        // Input control for descInv
        QString descInv = ui->desc_Invest->text();
        if (descInv.isEmpty() || !rx.exactMatch(descInv)) {
            QMessageBox::critical(nullptr, "Error", "Description invalide.");
            return;
        }

        // Input control for dateInv
        QDate dateInv = ui->date_Invest->date();
        if (!dateInv.isValid()) {
            QMessageBox::critical(nullptr, "Error", "Ajouter un date valide.");
            return;
        }

        // Input control for budgetInv
        QString budgetString = ui->budget_Invest->text();
        if (budgetString.isEmpty()) {
            QMessageBox::critical(nullptr, "Error", "Ajouter un budget.");
            return;
        }

        QValidator::State state = validator.validate(budgetString, pos);
        if (state != QValidator::Acceptable) {
            QMessageBox::critical(nullptr, "Error", "le budget doit etre un nombre positif et different de 0.");
            return;
        }

        double budgetInv = budgetString.toDouble();

        investisseurs newInvester(nomInv,descInv,budgetInv,dateInv);

        bool test=newInvester.createInvest();

        if(test)
        {
            //Refresh table after adding

            ui->tableInvest->setModel(Etmp.showInvest());

           QMessageBox::information(nullptr,QObject::tr("ajout validé"),
                                    QObject::tr("Ajout effectué\n""Click cancel to exit."),QMessageBox::Cancel);
        }
        else {
            QMessageBox::critical(nullptr,QObject::tr("ajout non validé"),
                                  QObject::tr("le nom deja existe, voulez vous choisir un autre nom.\n""Click ok to exit"),QMessageBox::Ok);
        }
    }



//---------------------------------------DELETE-------------------------//

void MainWindow::on_pushButton_delete_clicked()
{   investisseurs objet;
    objet.setNom(ui->DeleteName->text());

       //confirmation du check box
    if(!ui->ConfirmDeleteCheckBox->isChecked())
    {
        QMessageBox::warning(nullptr,tr("Confirmation de la suppression"),
                             tr("Voulez-vous confirmer la suppression par cocher le Checkbox"));


        return ;
    }
 bool test=Etmp.deleteInvest(objet.getNom());

    if(test)
    {
        ui->tableInvest->setModel(Etmp.showInvest());

        QMessageBox::information(nullptr,QObject::tr("supression validé"),
                                 QObject::tr("suppression effectué\n""Click cancel to exit."),QMessageBox::Cancel);
        ui->DeleteName->clear();

    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("suppression validé"),
                              QObject::tr("suppression non affectué.\n""Click cancel to exit"),QMessageBox::Cancel);


    }


}


//-------------------------UPDATE--------------------//

void MainWindow::on_pb_update_clicked()
{
    QRegExp rx("^[A-Za-z ]+$");
    QDoubleValidator validator(0, 1000000000, 2);
    int pos = 0;

    QString nomInv = ui->newNom->text();
    if (nomInv.isEmpty() || !rx.exactMatch(nomInv) ) {
        QMessageBox::critical(nullptr, "Error", "Nom invalide");
        return;
    }

    QString descInv = ui->newDescription->text();
    if (descInv.isEmpty() || !rx.exactMatch(descInv)) {
        QMessageBox::critical(nullptr, "Error", "Description invalide.");
        return;
    }

    QDate dateInv = ui->newDate->date();
    if (!dateInv.isValid()) {
        QMessageBox::critical(nullptr, "Error", "Ajouter une date valide.");
        return;
    }

    QString budgetString = ui->newBudget->text();
    if (budgetString.isEmpty()) {
        QMessageBox::critical(nullptr, "Error", "Ajouter un budget.");
        return;
    }

    QValidator::State state = validator.validate(budgetString, pos);
    if (state != QValidator::Acceptable) {
        QMessageBox::critical(nullptr, "Error", "Le budget doit être un nombre positif et différent de 0.");
        return;
    }

    double budgetInv = budgetString.toDouble();

    investisseurs newInvester(nomInv, descInv, budgetInv, dateInv);

    bool test = newInvester.updateInvest(nomInv);

    if (test) {
        ui->tableInvest->setModel(Etmp.showInvest());
        QMessageBox::information(nullptr, QObject::tr("Modification validée"),
            QObject::tr("Modification effectuée.\n"
            "Cliquer sur Cancel pour quitter."), QMessageBox::Cancel);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modification non validée"),
            QObject::tr("L'investisseur n'existe pas.\n"
            "Cliquer sur Cancel pour quitter."), QMessageBox::Cancel);
    }
}



//----------------------------FEATURES-------------------//
//-----------------SORT BY DATE -------------//

void MainWindow::on_pushButton_sort_clicked()
{
   QSqlQueryModel* sortedModel = Etmp.sortInvest();
   sortedModel->sort(2, Qt::DescendingOrder);


    ui->tableInvest->setModel(sortedModel);
    QMessageBox::information(nullptr,QObject::tr("tableau trié"),
                             QObject::tr("tri effectué\n""Click OK to exit."),QMessageBox::Ok);
}



//--------------------------PDF EXPORT FILE ---------------------//
void MainWindow::on_pushButton_export_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", "", "*.pdf");
        if (fileName.isEmpty()) return;

        QPdfWriter writer(fileName);
        writer.setPageSize(QPagedPaintDevice::A4);

        QPainter painter(&writer);
        painter.setFont(QFont("Arial", 12));

        // draw table
        QTableView* table = ui->tableInvest;
        int rows = table->model()->rowCount();
        int cols = table->model()->columnCount();

        int x = 50;
        int y = 50;
        int w = writer.width() - 100;

        int colWidth = w / cols;
        int rowHeight = 30;

        // draw header
        for (int i = 0; i < cols; i++) {
            QString header = table->model()->headerData(i, Qt::Horizontal).toString();
            painter.drawText(x + i * colWidth, y, colWidth, rowHeight, Qt::AlignVCenter | Qt::AlignHCenter, header);
            painter.drawRect(x + i * colWidth, y, colWidth, rowHeight);
        }

        // draw data
        y += rowHeight;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                QModelIndex index = table->model()->index(i, j);
                QString data = table->model()->data(index).toString();
                painter.drawText(x + j * colWidth, y + i * rowHeight, colWidth, rowHeight, Qt::AlignVCenter | Qt::AlignHCenter, data);
                painter.drawRect(x + j * colWidth, y + i * rowHeight, colWidth, rowHeight);
            }
        }

        painter.end();

        QMessageBox::information(nullptr, "Export PDF", "Le fichier PDF a été enregistré avec succées");
}


//-----------------------------SEARCH BY Name-------------------//


void MainWindow::on_pushButton_Chercher_clicked()
{       QRegExp rx("^[A-Za-z ]+$");
    QString searchName = ui->searchName->text();
        if (searchName.isEmpty() || !rx.exactMatch(searchName) ) {
            QMessageBox::critical(nullptr, "Error", "Nom invalide");
            return;
        }
    QSqlQueryModel* model = Etmp.searchInvest(searchName);
    ui->tableSearch->setModel(model);

}
//-----------------------------SEND investemment mail-------------------//



//-------------BUTTONS------------------//
void MainWindow::on_GoToAdd_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_GoToDelete_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_GoToUpdate_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_GoToTable_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_GotoSearch_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}






