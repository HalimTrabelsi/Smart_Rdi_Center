#include"investisseurs.h"
#include "smtp.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QDoubleValidator>
#include <QCheckBox>
#include <QMessageBox>
#include <QtNetwork/QSslSocket>
#include <QtNetwork/QSslConfiguration>
#include <QtNetwork/QSslError>
#include<QtMath>



investisseurs::investisseurs(QString nomInv,QString descInv,double budgetInv,QDate dateInv)
{    QRegExp rx("^[A-Za-z ]+$");
     if (!rx.exactMatch(nomInv) || !rx.exactMatch(descInv)) {
         throw std::invalid_argument("Nom ou description doit contenir que des lettres et des espaces");
     }

    this->nomInv=nomInv;
    this->descInv=descInv;


      if (budgetInv <= 0) {
             throw std::invalid_argument("Budget != 0 ou < 0");
         }

    this->budgetInv=budgetInv;
    this->dateInv=dateInv;
};
bool investisseurs::createInvest()
{
    QSqlQuery query;

        query.prepare("SELECT * FROM INVESTISSEUR WHERE NOM_INV = :nomInv");
        query.bindValue(":nomInv", nomInv);
        query.exec();

        if (query.next()) {
            return false;
        }


  query.prepare("INSERT INTO INVESTISSEUR (NOM_INV, DESCINV,DATE_INV, BUDGET) "
                "VALUES (:nomInv,:descInv,:dateInv,:budgetInv)");
  query.bindValue(":dateInv", dateInv);
  query.bindValue(":budgetInv", budgetInv);
  query.bindValue(":descInv", descInv);
  query.bindValue(":nomInv", nomInv );

  return query.exec();
  }


bool investisseurs::deleteInvest(QString nomInv)
{
    QSqlQuery query;
    query.prepare("DELETE FROM INVESTISSEUR WHERE NOM_INV = :nomInv");
    query.bindValue(":nomInv", nomInv);

    bool success = query.exec();

    return success;
}



QSqlQueryModel * investisseurs::showInvest()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM INVESTISSEUR ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Description"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Budget"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ID"));


    return model;



}

QSqlQueryModel* investisseurs::searchInvest(QString searchName)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString query = "SELECT * FROM INVESTISSEUR WHERE NOM_INV LIKE '" + searchName + "%'";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Budget"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID"));

    if (model->rowCount() == 0) {
        QMessageBox::warning(nullptr, "Erreur", "Aucun investissement ne correspond à votre recherche.");
    }

    return model;
}

bool investisseurs::updateInvest(QString nomInv)
{
    QSqlQuery query;
    query.prepare("UPDATE INVESTISSEUR SET DATE_INV = :dateInv, BUDGET = :budgetInv, DESCINV = :descInv WHERE NOM_INV = :nomInv");
    query.bindValue(":dateInv", dateInv);
    query.bindValue(":budgetInv", budgetInv);
    query.bindValue(":descInv", descInv);
    query.bindValue(":nomInv", nomInv);

    return query.exec();
}


QSqlQueryModel * investisseurs::sortInvest()
{

    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM INVESTISSEUR ORDER BY DATE_INV ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Description"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Budget"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ID"));


    return model;


}


double investisseurs::getAvgBudget() const {
    return avgBudget;
}

double investisseurs::getMinBudget() const {
    return minBudget;
}

double investisseurs::getMaxBudget() const {
    return maxBudget;
}

double investisseurs::getBudgetPerYear() const {
    int years = QDate::currentDate().month() - dateInv.month() + 1;
    return budgetInv / years;
}


double investisseurs::statistics() {
    double totalBudget = 0.0;
    double budgetPerYear = 0.0;

    QSqlQuery query;

    // Calculate the average budget
    if (query.exec("SELECT AVG(budget) FROM investisseur")) {
        if (query.next()) {
            avgBudget = query.value(0).toDouble();
        }
    }

    // Calculate the total budget
    if (query.exec("SELECT SUM(budget) FROM investisseur")) {
        if (query.next()) {
            totalBudget = query.value(0).toDouble();
        }
    }

    // Calculate the minimum and maximum budgets
    if (query.exec("SELECT MIN(budget), MAX(budget) FROM investisseur")) {
        if (query.next()) {
            minBudget = query.value(0).toDouble();
            maxBudget = query.value(1).toDouble();
        }
    }

    // Calculate the budget per month
    int months = QDate::currentDate().month() - dateInv.month() + 1;
    budgetPerYear = totalBudget / months;

    return budgetPerYear;
}







