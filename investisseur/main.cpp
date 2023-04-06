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


    }


    else
        QMessageBox::critical(nullptr, QObject::tr("datbase didn't open"),
                              QObject::tr("connection failed.\n"
                                          "Click cancel to exit"),
                              QMessageBox::Cancel);






    return a.exec();
}
