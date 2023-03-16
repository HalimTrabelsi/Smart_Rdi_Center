#include "Projets.h"
#include <QSqlQuery>
#include <QtDebug>

Projets::Projets(int Id_projet, QString Objet_projet, QString Desc_projet,double Budget)
{
    this->Id_projet = Id_projet;
    this->Objet_projet = Objet_projet;
    this->Desc_projet = Desc_projet;
    this->Budget = Budget;

}

bool Projets::ajouter()
{

    QSqlQuery query;
       query.prepare("INSERT INTO Projets (ID_PROJET, OBJET_PROJET, DESC_PROJET, BUDGET) "
                     "VALUES (:Id_projet, :Objet_projet, :Desc_projet, :Budget)");
       query.bindValue(":Id_projet", Id_projet);
       query.bindValue(":Objet_projet", Objet_projet);
       query.bindValue(":Desc_projet", Desc_projet);
       query.bindValue(":Budget", Budget);

    //    query.exec();
       if(query.exec())
           return true;
       else
           return false;

}


QSqlQueryModel * Projets::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM Projets");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id projet"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Objet projet"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Desc projet"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Budget"));



    return model;
}


bool Projets::supprimer(int Id_projet)
{
QSqlQuery query;
query.prepare("Delete from Projets where ID_PROJET= :id");
query.bindValue(":id",Id_projet);
query.exec();
return query.exec();
}

bool Projets :: modifier(QString recherche)
{
    QSqlQuery query;
        query.prepare("UPDATE PROJETS SET ID_PROJET = :Id_projet, OBJET_PROJET = :Objet_projet, DESC_PROJET = :Desc_projet, BUDGET = :Budget  WHERE ID_PROJET LIKE '"+recherche+"%'");
        query.bindValue(":Id_projet", Id_projet);
        query.bindValue(":Objet_projet", Objet_projet);
        query.bindValue(":Desc_projet", Desc_projet);
        query.bindValue(":Budget", Budget);

        query.exec();
       return  query.exec();
}
QSqlQueryModel* Projets ::rechercherID(QString recherche)
{
    QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT * FROM Projets where Id_projet LIKE '"+recherche+"%' ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id projet"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Objet projet"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Desc projet"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Budget"));
    return model;
}
