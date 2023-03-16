#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Projets.h"
#include "QtDebug"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_etudiant->setModel(Etmp.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}
//Id_projet,Objet_projet,Desc_projet,Budget ;

void MainWindow::on_pushButton_ajouter_clicked()
{
        int Id_projet = ui->le_ID->text().toInt();
        QString Objet_projet = ui->le_Objet->text();
        QString Desc_projet = ui->le_Desc->text();
        double Budget = ui->le_Budget->text().toDouble();
        //controle de saisie !!
        // Vérification du champ ID
                if (ui->le_ID->text().isEmpty()) {
                    QMessageBox::critical(this, "Error", "Please enter an ID for the Equipement.");
                    return;
                }
                QRegExp regex("^[0-9]+$");
                    if (!regex.exactMatch(ui->le_ID->text())) {
                        QMessageBox::critical(this, "Erreur", "L'ID ne doit contenir que des chiffres.");
                        return;
                    }

                    // Vérifier que l'ID est unique dans la base de données
                    Projets projet;
                    if (projet.rechercherID(ui->le_ID->text())->rowCount() != 0) {
                        QMessageBox::critical(this, "Erreur", "L'ID existe déjà dans la base de données.");
                        return;
                    }
                    // Vérification du champ Prix
                            QRegExp BudgetRegex("[1-9][0-9]*(\\.[0-9]{1,2})?$");  // Le prix doit être un nombre positif avec au plus 2 chiffres après la virgule
                                if (!BudgetRegex.exactMatch(ui->le_Budget->text())) {
                                    QMessageBox::critical(this, "Error", "Invalid price. The price should be a positive number with at most 2 decimal places.");
                                    return;
                                }
                                if (Budget <= 0) {
                                    QMessageBox::critical(this, "Error", "Invalid price. The price should be greater than 0.");
                                    return;
                                }

        // Create a new instance of Projets with the user inputs
        Projets newProjet(Id_projet, Objet_projet, Desc_projet, Budget);

        // Call the addProjet() function to add the new Projet to the database
        if (newProjet.ajouter()) {
            QMessageBox::information(this, "Success", "Projet added successfully.");
            ui->tab_etudiant->setModel(Etmp.afficher());

        } else {
            QMessageBox::critical(this, "Error", "Failed to add Projet.");
        }

        // Clear the input fields
        ui->le_ID->clear();
        ui->le_Objet->clear();
        ui->le_Desc->clear();
        ui->le_Budget->clear();
        }


void MainWindow::on_pushButton_supprimer_clicked()
{
    Projets E1;

 E1.setId_projet(ui->le_ID->text().toInt());
 int x=E1.getId_projet();
bool test=Etmp.supprimer(x);

if(test)
{

    //Refresh (actualiser)
    ui->tab_etudiant->setModel(Etmp.afficher());

QMessageBox::information(nullptr, QObject::tr("OK"),
QObject::tr("Suppression effectué\n"
             "Click cancel to exit."),QMessageBox::Cancel);
ui->le_IDS->clear();

}
else
QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
QObject::tr("Suppression non effectué\n"
             "Click cancel to exit."),QMessageBox::Cancel);

}

void MainWindow::on_pb_modifier_clicked()
{

    int Id_projet = ui->le_ID->text().toInt();
    QString Objet_projet = ui->le_Objet->text();
    QString Desc_projet = ui->le_Desc->text();

    double Budget = ui->le_Budget->text().toDouble();
    QString recherche=ui->le_find->text();


    Projets newProjet(Id_projet, Objet_projet, Desc_projet, Budget);


    if (newProjet.rechercherID(recherche)->rowCount()!=0 and recherche.length()!=0)
    {
                bool test= newProjet.modifier(recherche);
                               if(test){
                                   MainWindow w;
                               w.show();
                               QMessageBox::information(nullptr, QObject::tr("database is open"),
                                           QObject::tr("Modification effectué.\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
                                  ui->tab_etudiant->setModel(newProjet.afficher());
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


    ui->tab_etudiant->setModel(newProjet.afficher());
     }

