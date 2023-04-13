#include "messengerconnection.h"
#include "connection.h"
#include "ui_messengerconnection.h"
#include<QTcpSocket>
namespace investisseurMessenger {


messengerConnection::messengerConnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::messengerConnection)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);

    connect(mSocket , &QTcpSocket::readyRead , [&]() {

    QTextStream T(mSocket);

    auto text = T.readAll();
    ui->textEdit->append(text);


    });
}

messengerConnection::~messengerConnection()
{
    delete ui;
}

void messengerConnection::on_ok_clicked()
{
   mHostname = ui->hostname->text();
   mPort = ui->port->value();
   accept();
}

void messengerConnection::on_cancel_clicked()
{
 reject();
}

void messengerConnection::on_send_clicked()
{

    QTextStream T(mSocket);
    T << ui->nickname->text() << ":" << ui->message->text();
    mSocket->flush();
    ui->message->clear();

}

void messengerConnection::on_bind_clicked()
{
    messengerConnection D(this);
   if (D.exec() == QDialog::Rejected)
   {
       return ;
   }
   mSocket->connectToHost(D.hostname(),D.port());
}
}
