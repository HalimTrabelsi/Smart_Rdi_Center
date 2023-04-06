#ifndef INVESTISSEURS_H
#define INVESTISSEURS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class investisseurs
{
QString nomInv,descInv;
double budgetInv;
QDate dateInv;

//Constructers
public:
investisseurs(){}
investisseurs(QString,QString,double,QDate);

//Getters
QString getNom(){return nomInv;}
QString getDescription(){return descInv;}
double getBudget(){return budgetInv;}
QDate getDateinvest(){return dateInv;}

//Setters
void setNom(QString name){nomInv=name;}
void setBudget(double budget){budgetInv=budget;}
void setDescription(QString desc){descInv=desc;}
void setDate(QDate date){dateInv=date;}

//functions
bool createInvest();
bool updateInvest(QString searchName);
QSqlQueryModel* showInvest();
bool deleteInvest(QString);
QSqlQueryModel* searchInvest(QString );
QSqlQueryModel* sortInvest();








};

#endif // INVESTISSEURS_H
