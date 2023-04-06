#include "connection.h"
#include "connection.h"

connection::connection() {}

bool connection::createConnection()
{
    bool test=false;
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost"); // Nom de l'hôte
    db.setDatabaseName("MOHAMED"); // Nom de la base de données
    db.setUserName("MOHAMED"); // Nom d'utilisateur
    db.setPassword("esprit"); // Mot de passe

    if (db.open())
    {
        test=true;
        QMessageBox::information(nullptr, QObject::tr("Database is open"),
                              QObject::tr("Connection successful.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"),
                              db.lastError().text(), QMessageBox::Cancel);
    }
    return test;
}


