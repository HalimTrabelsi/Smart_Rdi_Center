#include "mainwindow.h"

#include <QApplication>

#include <QApplication>
#include <QMessageBox>

#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connection c;
    bool test=c.createConnection();
    if(test)
    {
        // Connexion établie, faire quelque chose ici
    }

    return a.exec();
}
