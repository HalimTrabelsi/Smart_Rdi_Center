#include"investisseurs.h"
#include <QSqlError>
#include <QSqlQuery>
investisseurs::investisseurs(QString nomInv,QString descInv,double budgetInv,QDate dateInv)
{
  this->nomInv=nomInv;
    this->descInv=descInv;
    this->budgetInv=budgetInv;
    this->dateInv=dateInv;
};
bool investisseurs::createInvest()
{

   QSqlQuery query;
  query.prepare("INSERT INTO INVESTISSEUR (NOM_INV, DESCINV, BUDGET,DATE_INV, BUDGET) "
                "VALUES (:nomINV,:descInv,:dateINV,:budgetInv)");
  query.bindValue(":dateInv", dateInv);
  query.bindValue(":budgetInv", budgetInv);
  query.bindValue(":descInv", descInv);
  query.bindValue(":nomInv", nomInv );

  return query.exec();
  }

bool investisseurs::deleteInvest(QString nomInv,QDate dateInv)
{

QSqlQuery query;
query.prepare("DELETE FROM INVESTISSEUR WHERE DATE_INV = dateInv AND NOM_INV = nomINV");
query.bindValue(":DATE_INV",dateInv.toString("yyyy-MM-dd"));
query.bindValue("NOM_INV = nomINV",nomInv);

query.exec();


return (query.exec());
}

QSqlQueryModel * investisseurs::showInvest()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM INVESTISSEUR ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Budget"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Description"));

    return model;



}

QSqlQueryModel * investisseurs::searchInvest(QString searchId)
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT * FROM INVESTISSEUR where ID_INV LIKE '"+searchId+"%' ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Budget"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Description"));

    return model;

}

bool investisseurs::updateInvest(QString searchId)
{
    QSqlQuery query;

   query.prepare("UPDATE INVESTISSEUR DATE_INV = :dateInv, BUDGET = :budgetInv, DESCINV = :descINV, NOM_INV = :nomInv) WHERE ID_INV LIKE '"+searchId+"%'");
   query.bindValue(":dateInv", dateInv);
   query.bindValue(":budgetInv", budgetInv);
   query.bindValue(":descInv", descInv);
   query.bindValue(":nomInv", nomInv );

   return query.exec();


}

