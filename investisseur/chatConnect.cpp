#include "chatConnect.h"
#include "ui_mainwindow.h"
Connect::Connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connect)
{
    ui->setupUi(this);

}

Connect::~Connect()
{
    delete ui;
}



void Connect::on_connect_to_server_clicked()
{
    hostname=ui->hostname->text();
    port=ui->port->value();
    Reports r;

    accept();

}

void Connect::on_cancel_form_server_clicked()
{
    reject();
}
