#pragma once
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class Projets
{
private:
    int Id_projet;
    QString Objet_projet;
    QString Desc_projet;
    double Budget;


public:
    Projets(){};
     Projets(int Id_projet, QString Objet_projet, QString Desc_projet,
              double Budget );

   int getId_projet() {return Id_projet;}
    QString getObjet_projet() const;
    QString getDesc_projet() const;
    double getBudget() const;

//    void setID(int id){this->id=id;}

    void setId_projet(int Id_projet){this->Id_projet=Id_projet;};
    void setObjet_projet(const QString& Objet_projet);
    void setDesc_projet(const QString& Desc_projet);
    void setBudget(const double& Budget);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(QString Id_projet);
    QSqlQueryModel* rechercherID(QString );
    QSqlQueryModel* trierParBudget();
    QSqlQueryModel*rechercherParObjet(QString objet);

};

