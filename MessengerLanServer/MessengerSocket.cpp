#include "MessengerSocket.h"

ChatSocket::ChatSocket(qintptr handle, QObject *parent) : QTcpSocket(parent)
{
    setSocketDescriptor(handle);
    connect(this ,&ChatSocket::readyRead,[&](){

        emit CreadyRead(this);
    });
    connect(this,&ChatSocket::stateChanged, [&](int S){
        emit CStateChanged(this,S);
    });
}


