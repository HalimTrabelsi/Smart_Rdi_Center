#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>


class connection
{
public:
    QSqlDatabase db;
    connection();
    bool createConnection();
};

#endif // CONNECTION_H
