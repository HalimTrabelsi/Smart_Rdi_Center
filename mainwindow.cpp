#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Equipements.h"
#include "QtDebug"
#include <QMessageBox>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QPainter>
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
//Collect_ID,Collect_name,location,collect_date,description_c ;
//float collect_budget,collections;
void MainWindow::on_pushButton_ajouter_clicked()
{
        QString ID_Equipements = ui->le_ID->text();
        QString Nom = ui->le_nom->text();
        QString Type = ui->le_type->text();
        double Prix = ui->le_prix->text().toDouble();
        int Quantite = ui->le_quantite->text().toInt();
        // Vérification du champ ID
        if (ID_Equipements.isEmpty()) {
            QMessageBox::critical(this, "Error", "Please enter an ID for the Equipement.");
            return;
        }
        QRegExp regex("^[0-9]+$");
            if (!regex.exactMatch(ID_Equipements)) {
                QMessageBox::critical(this, "Erreur", "L'ID ne doit contenir que des chiffres.");
                return;
            }

            // Vérifier que l'ID est unique dans la base de données
            Equipements equipement;
            if (equipement.rechercherID(ID_Equipements)->rowCount() != 0) {
                QMessageBox::critical(this, "Erreur", "L'ID existe déjà dans la base de données.");
                return;
            }
        // Vérification du champ Nom
        if (Nom.isEmpty()) { //Cette ligne vérifie si la variable Nom est vide en appelant la méthode isEmpty() de la classe QString. Si la variable est vide, alors cela signifie que l'utilisateur n'a pas entré de nom pour l'équipement et une boîte de message d'erreur s'affiche pour l'en informer.
            QMessageBox::critical(this, "Error", "Please enter a name for the Equipement.");
            return;
        }
        QRegularExpression regexNom("^[A-Za-z0-9 ]+$"); // Expression régulière pour valider le nom
        QRegularExpressionMatch matchNom = regexNom.match(Nom); //Cette ligne exécute l'expression régulière sur la variable Nom en appelant la méthode match() de la classe QRegularExpression. Le résultat est stocké dans la variable matchNom, qui est une instance de la classe QRegularExpressionMatch.

        if (!matchNom.hasMatch()) { //Cette ligne vérifie si l'expression régulière n'a pas trouvé de correspondance pour le nom de l'équipement en appelant la méthode hasMatch() de la classe QRegularExpressionMatch. Si le nom ne correspond pas à l'expression régulière, alors une boîte de message d'erreur s'affiche pour en informer l'utilisateur.
            QMessageBox::critical(this, "Error", "Invalid Nom: Nom must contain only letters, digits and spaces.");
            return;
        }

        // Vérification du champ Type
        if (Type.isEmpty()) {
            QMessageBox::critical(this, "Error", "Please enter a Type for the Equipement.");
            return;
        }
        if (Type.contains(QRegExp("^[a-zA-Z\\s]*$")) == false) {
                QMessageBox::critical(this, "Erreur", "Le type ne doit contenir que des lettres et des espaces.");
                return;
            }

        // Vérification du champ Prix
        QRegExp prixRegex("[1-9][0-9]*(\\.[0-9]{1,2})?$");  // Le prix doit être un nombre positif avec au plus 2 chiffres après la virgule
            if (!prixRegex.exactMatch(ui->le_prix->text())) {
                QMessageBox::critical(this, "Error", "Invalid price. The price should be a positive number with at most 2 decimal places.");
                return;
            }
            if (Prix <= 0) {
                QMessageBox::critical(this, "Error", "Invalid price. The price should be greater than 0.");
                return;
            }

        // Vérification du champ Quantite
            QString Quantite_str = ui->le_quantite->text();
            if (Quantite_str.isEmpty() || Quantite_str.toInt() <= 0) {
                QMessageBox::critical(this, "Error", "Please enter a positive quantity.");
                return;
            }





        // Create a new instance of Equipements with the user inputs
        Equipements newEquipement(ID_Equipements, Nom, Type, Prix, Quantite);

        // Call the addEquipement() function to add the new Equipement to the database
        if (newEquipement.ajouter()) {
            QMessageBox::information(this, "Success", "Equipement added successfully.");
            ui->tab_etudiant->setModel(Etmp.afficher());

        } else {
            QMessageBox::critical(this, "Error", "Failed to add Equipement.");
        }

        // Clear the input fields
        ui->le_ID->clear();
        ui->le_nom->clear();
        ui->le_type->clear();
        ui->le_prix->clear();
        ui->le_quantite->clear();
        }


void MainWindow::on_pushButton_supprimer_clicked()
{
    Equipements E1;

 E1.setIDEquipements(ui->le_IDS->text());
bool test=Etmp.supprimer(E1.getID_Equipements());

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

    QString ID_Equipements= ui->le_ID_2->text();
    QString Nom = ui->le_nom_2->text();
    QString Type = ui->le_type_2->text();
    double Prix = ui->le_prix_2->text().toDouble();
    int Quantite = ui->le_quantite_2->text().toInt();
    QString recherche=ui->le_find->text();
    // Vérification du champ ID
    if (ID_Equipements.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please enter an ID for the Equipement.");
        return;
    }
    QRegExp regex("^[0-9]+$");
        if (!regex.exactMatch(ID_Equipements)) {
            QMessageBox::critical(this, "Erreur", "L'ID ne doit contenir que des chiffres.");
            return;
        }
    // Vérification du champ Nom
    if (Nom.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please enter a name for the Equipement.");
        return;
    }
    QRegularExpression regexNom("^[A-Za-z0-9 ]+$"); // Expression régulière pour valider le nom
    QRegularExpressionMatch matchNom = regexNom.match(Nom);

    if (!matchNom.hasMatch()) {
        QMessageBox::critical(this, "Error", "Invalid Nom: Nom must contain only letters, digits and spaces.");
        return;
    }

    // Vérification du champ Type
    if (Type.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please enter a Type for the Equipement.");
        return;
    }
    if (Type.contains(QRegExp("^[a-zA-Z\\s]*$")) == false) {
            QMessageBox::warning(this, "Erreur", "Le type ne doit contenir que des lettres et des espaces.");
            return;
        }

    // Vérification du champ Prix
    QRegExp prixRegex("[1-9][0-9]*(\\.[0-9]{1,2})?$");  // Le prix doit être un nombre positif avec au plus 2 chiffres après la virgule
        if (!prixRegex.exactMatch(ui->le_prix_2->text())) {
            QMessageBox::critical(this, "Error", "Invalid price. The price should be a positive number with at most 2 decimal places.");
            return;
        }
        if (Prix <= 0) {
            QMessageBox::critical(this, "Error", "Invalid price. The price should be greater than 0.");
            return;
        }

    // Vérification du champ Quantite
        QString Quantite_str = ui->le_quantite_2->text();
        if (Quantite_str.isEmpty() || Quantite_str.toInt() <= 0) {
            QMessageBox::critical(this, "Error", "Please enter a positive quantity.");
            return;
        }

    Equipements newEquipement(ID_Equipements, Nom, Type, Prix, Quantite);


    if (newEquipement.rechercherID(recherche)->rowCount()!=0 and recherche.length()!=0)
    {
                bool test= newEquipement.modifier(recherche);
                               if(test){
                                   MainWindow w;
                               w.show();
                               QMessageBox::information(nullptr, QObject::tr("database is open"),
                                           QObject::tr("Modification effectué.\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
                                  ui->tab_etudiant->setModel(newEquipement.afficher());
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


    ui->tab_etudiant->setModel(newEquipement.afficher());
     }

void MainWindow::on_pushButtonPDF_clicked()
{

    QPdfWriter pdf("C:/Users/ououb/OneDrive/Bureau/Liste_Equipements.pdf");

   QPainter painter(&pdf);
   int i = 4100;
   const QImage image(":/Logo_ESPRIT_Ariana.jpg");
               const QPoint imageCoordinates(155,0);
               int width1 = 1600;
               int height1 = 600;
               QImage img=image.scaled(width1,height1);
               painter.drawImage(imageCoordinates, img );


          QColor dateColor(0x4a5bcf);
          painter.setPen(dateColor);

          painter.setFont(QFont("Montserrat SemiBold", 11));
          QDate cd = QDate::currentDate();
          painter.drawText(7700,250,cd.toString("Ariana, El Ghazela"));
          painter.drawText(8100,500,cd.toString("dd/MM/yyyy"));

          QColor titleColor(0x341763);
          painter.setPen(titleColor);
          painter.setFont(QFont("Montserrat SemiBold", 25));

          painter.drawText(3000,2700,"Liste des Equipements");

          painter.setPen(Qt::black);
          painter.setFont(QFont("Time New Roman", 15));
          //painter.drawRect(100,100,9400,2500);
          painter.drawRect(100,3300,9400,500);

          painter.setFont(QFont("Montserrat SemiBold", 10));

          painter.drawText(300,3600,"ID_Equipements");
          painter.drawText(1000,3600,"Nom");
          painter.drawText(2300,3600,"Type");
          painter.drawText(3300,3600,"Prix");
          painter.drawText(4300,3600,"Quantite");
          painter.setFont(QFont("Montserrat", 10));
          painter.drawRect(100,3300,9400,9000);

          QSqlQuery query;
          query.prepare("select * from Equipements");
          query.exec();
          int y=4300;
          while (query.next())
          {
              painter.drawLine(100,y,9490,y);
              y+=500;
              painter.drawText(300,i,query.value(2).toString());
              painter.drawText(1000,i,query.value(0).toString());
              painter.drawText(2300,i,query.value(1).toString());
              painter.drawText(3300,i,query.value(3).toString());
              painter.drawText(4300,i,query.value(4).toString());
              painter.drawText(5300,i,query.value(5).toString());
              painter.drawText(6300,i,query.value(6).toString());
              painter.drawText(7300,i,query.value(7).toString());

             i = i + 500;
          }

          int reponse = QMessageBox::question(this, "Génerer PDF", "PDF Enregistré.\nVous voulez l'affichez ?", QMessageBox::Yes |  QMessageBox::No);
          if (reponse == QMessageBox::Yes)
          {
              QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/ououb/OneDrive/Bureau/Liste_Equipements.pdf"));
              painter.end();
          }
          else
          {
              painter.end();
          }


}
