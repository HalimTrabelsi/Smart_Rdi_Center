#include <QCoreApplication>
#include"MessengerServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ChatServer server;
    if(!server.StartServer(3333))
    {
        qDebug() << "Error:" << server.errorString();



    }
qDebug() << "server started...";

    return a.exec();
}
