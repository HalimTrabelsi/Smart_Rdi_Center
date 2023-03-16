#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createConnection();
    MainWindow w;

    if(test)
    {
    w.show();

    QMessageBox::information(nullptr, QObject::tr("database is open"),
                             QObject::tr("connection successful.\n" "Click Cancel to exit."),
                             QMessageBox::Cancel);
    }


    else
        QMessageBox::critical(nullptr, QObject::tr("datbase didn't open"),
                              QObject::tr("connection failed.\n"
                                          "Click cancel to exit"),
                              QMessageBox::Cancel);






    return a.exec();
}
