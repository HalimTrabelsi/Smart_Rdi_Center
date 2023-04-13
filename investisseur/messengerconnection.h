#ifndef MESSENGERCONNECTION_H
#define MESSENGERCONNECTION_H

#include <QDialog>

namespace Ui {
class messengerConnection;
}
class QTcpSocket;
namespace investisseurMessenger {


class messengerConnection : public QDialog
{
    Q_OBJECT

public:
    explicit messengerConnection(QWidget *parent = nullptr);
    ~messengerConnection();
    QString hostname() const;
    quint16 port() const;

private slots:
    void on_ok_clicked();
    void on_cancel_clicked();
    void on_send_clicked();
    void on_bind_clicked();

private:
    Ui::messengerConnection *ui;
    QString mHostname;
    quint16 mPort;
    QTcpSocket *mSocket;
};
inline QString messengerConnection::hostname() const
{
 return mHostname ;
}
inline quint16 messengerConnection::port() const
{
    return mPort;
}
}
#endif // MESSENGERCONNECTION_H
