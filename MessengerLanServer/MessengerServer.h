#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <QTcpServer>

class ChatSocket;
class ChatServer : public QTcpServer
{
public:
    ChatServer(QObject *parent=nullptr);
    bool StartServer(qint16 port);

protected:
    void incomingConnection(qintptr handle);
private:
    QList<ChatSocket *> mSockets;
};

#endif // CHATSERVER_H
