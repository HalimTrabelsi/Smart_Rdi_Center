#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Projets.h"
#include "QtDebug"
#include <QMessageBox>
#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QFile>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QCategoryAxis>

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
                    QMessageBox::critical(this, "Error", "Please enter an ID for the projet.");
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


//----------------------------------------------------------Tri employés----------------------------------------------------------//



void MainWindow::on_triBudgetCroissant_clicked()
{
    Projets projet;
    QSqlQueryModel* model = projet.trierParBudget();

    ui->tab_etudiant->setModel(model);
     ui->tab_etudiant->show();
}
//----------------------------------------------------------Recherche Projet----------------------------------------------------------//

void MainWindow::on_recherche_projet_textChanged(const QString )
{
    Projets p ;
    QString rech=ui->recherche->text();
    ui->tab_etudiant->setModel(p.rechercherID(rech));
}


//----------------------------------------------------------PDF employé----------------------------------------------------------//

void MainWindow::on_ButtonPDF_clicked()
{

    QPdfWriter pdf("C:/Users/nadine/Desktop/Liste_Projets.pdf");



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

          painter.drawText(3000,2700,"Liste des Projets");

          painter.setPen(Qt::black);
          painter.setFont(QFont("Time New Roman", 15));
          //painter.drawRect(100,100,9400,2500);
          painter.drawRect(100,3300,9400,500);

          painter.setFont(QFont("Montserrat SemiBold", 10));

          painter.drawText(300,3600,"Id_projet");
          painter.drawText(1000,3600,"Objet_projet");
          painter.drawText(2300,3600,"Desc_projet");
          painter.drawText(3300,3600,"Budget");


          painter.setFont(QFont("Montserrat", 10));
          painter.drawRect(100,3300,9400,9000);

          QSqlQuery query;
          query.prepare("select * from Projets");
          query.exec();
          int y=4300;
          while (query.next())
          {
              painter.drawLine(100,y,9490,y);
              y+=500;

              painter.drawText(1000,i,query.value(0).toString());
              painter.drawText(2300,i,query.value(1).toString());
              painter.drawText(3300,i,query.value(2).toString());
              painter.drawText(4300,i,query.value(3).toString());

             i = i + 500;
          }

          int reponse = QMessageBox::question(this, "Génerer PDF", "PDF Enregistré.\nVous voulez l'affichez ?", QMessageBox::Yes |  QMessageBox::No);
          if (reponse == QMessageBox::Yes)
          {
              QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/nadine/Desktop/Liste_Projets.pdf"));
              painter.end();
          }
          else
          {
              painter.end();
          }


}
void MainWindow::on_pushButton_stat_clicked()
{

    for (QObject *child : ui->tableView->children()) {
            if (child->inherits("QtCharts::QChartView")) {
                child->deleteLater();
            }
        }


    // Récupération des données de la table "PROJETS" de la base de données
    QSqlQuery query;
    query.exec("SELECT BUDGET, COUNT(*) FROM PROJETS GROUP BY BUDGET ");

    // Création des barres pour chaque budget de projet
    QtCharts::QBarSet *set = new QtCharts::QBarSet("budget");
    while (query.next()) {
        QString Type = query.value(0).toString();
        int count = query.value(1).toInt();
        *set << count;
        set->setLabel(Type);
    }

    // Ajout des barres au graphique
    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();
    series->append(set);

    // Création de l'axe des catégories
    QtCharts::QCategoryAxis *axis = new QtCharts::QCategoryAxis();
    axis->append(set->label(), 0);

    // Création de l'axe des valeurs (objet)
    QtCharts::QValueAxis *valueAxis = new QtCharts::QValueAxis();
    valueAxis->setRange(0, set->at(set->count() - 1));
    valueAxis->setLabelFormat("%d");

    // Création du graphique et ajout des axes et des barres
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques sur les budget de projets");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    chart->setAxisY(valueAxis);

    // Affichage du graphique dans l'élément "tableView" de votre interface utilisateur
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->tableView);
    chartView->resize(ui->tableView->size());
    chartView->show();
}
void MainWindow::on_rechercherParObjet_clicked()
{
    QString objet = ui->recherche->text();

    Projets projet;
    QSqlQueryModel* model = projet.rechercherParObjet(objet);

    ui->tab_etudiant->setModel(model);
    ui->tab_etudiant->show();
}
