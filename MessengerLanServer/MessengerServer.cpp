#include "MessengerSocket.h"
#include "MessengerServer.h"
#include <QTextStream>
#include <QDebug>
ChatServer::ChatServer(QObject *parent) : QTcpServer(parent)
{

}

bool ChatServer::StartServer(qint16 port)
{
    return listen(QHostAddress::Any,port);
}

void ChatServer::incomingConnection(qintptr handle)
{
    qDebug()<<"Client connected with handle : "<< handle;
    auto socket=new ChatSocket(handle,this);
    mSockets<<socket;
    for(auto i : mSockets){
        QTextStream T(i);
        T<< "Server : Connected : "<< handle;
        i->flush();
    }
    connect(socket,&ChatSocket::CreadyRead, [&](ChatSocket *S){
        qDebug() <<"readyread";
        QTextStream T(S);
        auto text=T.readAll();
        for (auto i : mSockets){
            QTextStream K(i);
            K<<text;
            i->flush();
        }
    });

    connect(socket,&ChatSocket::CStateChanged,[&](ChatSocket *S,int ST){
        qDebug() <<"CState Changed with handel : "<< S->socketDescriptor();
       if(ST==QTcpSocket::UnconnectedState){
           qDebug() <<"Unconnected State with handle : "<< S->socketDescriptor();
           mSockets.removeOne(S);
           for (auto i : mSockets){
               QTextStream K(i);
               K<<"Server : Client "<<S->socketDescriptor()<<"Disconnected...";
               i->flush();
           }
       }
    });

}
