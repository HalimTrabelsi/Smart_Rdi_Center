#ifndef CHATSOCKET_H
#define CHATSOCKET_H
#include <QTcpSocket>

class ChatSocket : public QTcpSocket
{
    Q_OBJECT
public:
    ChatSocket(qintptr handle, QObject *parent=nullptr);

signals :
    void CreadyRead(ChatSocket *);
    void CStateChanged(ChatSocket *,int);
};



#endif // CHATSOCKET_H
