#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c; // cree un objet de type connection
    bool test=c.createconnect();// appel de la methode ouvrir connection
      MainWindow w;// cree une instance de type mainwindow c'est notre interface graphique
      if(test) //si la methode ouvrir connection a retourner true je vais afficher msg connection successful
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
