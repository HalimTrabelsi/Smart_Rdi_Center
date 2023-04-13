#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chatconnection.h"
#include "investisseurs.h"
#include "messengerconnection.h"
#include "ui_messengerconnection.h"
#include"smtp.h"
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
#include <QDialog>
#include<QTcpSocket>
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
    painter.setFont(QFont("Arial", 4));

    // draw table
    QTableView* table = ui->tableInvest;
    int rows = table->model()->rowCount() + 1;
    int cols = table->model()->columnCount();

    int x = 100;
    int y = 100;
    int w = writer.width() - 100;

    int colWidth = w / cols;
    int rowHeight = 120;

    // draw header
    painter.setPen(Qt::black);
    painter.setBrush(Qt::gray);
    painter.drawRect(x, y, w, rowHeight);
    painter.drawText(x, y, w, rowHeight, Qt::AlignVCenter | Qt::AlignHCenter, "Investisseurs");
    for (int i = 0; i < cols; i++) {
        QString header = table->model()->headerData(i, Qt::Horizontal).toString();
        QRect cellRect(x + i * colWidth, y + rowHeight, colWidth, rowHeight);
        painter.drawRect(cellRect);
        painter.drawText(cellRect, Qt::AlignVCenter | Qt::AlignHCenter, header);
    }

    // draw data
    y += 2 * rowHeight;
    painter.setPen(Qt::black);
    painter.setBrush(Qt::NoBrush);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            QModelIndex index = table->model()->index(i, j);
            QString data = table->model()->data(index).toString();
            QRect cellRect(x + j * colWidth, y + i * rowHeight, colWidth, rowHeight);
            painter.drawRect(cellRect);
            painter.drawText(cellRect, Qt::AlignVCenter | Qt::AlignHCenter, data);
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



void MainWindow::on_pushButton_sendMail_clicked()
{
    QString recipient = ui->recipientEdit->text().trimmed();
    QString object = ui->objectEdit->text();
    QString message = ui->bodyEdit->text();
    QRegularExpression regex(R"(^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}$)");
    QRegularExpressionMatch match = regex.match(recipient);

    //Input control
    if (!match.hasMatch() || recipient.isEmpty()) {
        QMessageBox::warning(nullptr, QObject::tr("Verification du Mail"),
                                 QObject::tr("Mail invalide ou champ vide"), QMessageBox::Ok);
        return;
    }
    if(object.isEmpty())
    {
        QMessageBox::warning(nullptr, QObject::tr("Verification de l'objet "),
                                 QObject::tr("Objet du mail non valide"), QMessageBox::Ok);
        return;


    }
    if(message.isEmpty())
    {
        QMessageBox::warning(nullptr, QObject::tr("Verification du message "),
                                 QObject::tr("message du mail non valide"), QMessageBox::Ok);
        return;


    }


    Smtp* smtp = new Smtp("trabelsihalim4@gmail.com", "ibpqpyoyhuzugpmw", "smtp.gmail.com", 465, 30000);
    smtp->sendMail("trabelsihalim4@gmail.com", recipient, object, message);

    QMessageBox::information(nullptr, QObject::tr("Mail"),
                             QObject::tr("Mail envoyé avec succès."), QMessageBox::Ok);
}
//-----------------------------Staitsiques------------------//

void MainWindow::on_GetStats_clicked()
{   QMessageBox msgBox;
    QLabel *statsLabel = ui->statsLabel;

    investisseurs investor;
    double avgBudget = investor.statistics();
    double minBudget = investor.getMinBudget();
    double maxBudget = investor.getMaxBudget();
    //double budgetPerYear = investor.getBudgetPerYear();

    QString output = "Moyenne des budgets: " + QString::number(avgBudget, 'f', 2) + " €\n" +
                     "Budget minimum: " + QString::number(minBudget, 'f', 2) + " €\n" +
                     "Budget maximum: " + QString::number(maxBudget, 'f', 2) + " €\n" ;


    msgBox.setText("Statistiques des investisseurs");
    msgBox.setInformativeText(output);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
    statsLabel->setText(output);


}













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

void MainWindow::on_GoToMail_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_GotoStats_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_openMessengerConnection_clicked()
{
    investisseurMessenger::messengerConnection *messengerConnection = new investisseurMessenger::messengerConnection(this);
       messengerConnection->exec();
}
