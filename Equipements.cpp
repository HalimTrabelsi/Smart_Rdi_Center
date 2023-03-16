#include "Equipements.h"
#include <QSqlQuery>
#include <QtDebug>
#include <cctype>

Equipements::Equipements(QString ID_Equipements, QString Nom, QString Type, double Prix, int Quantite)// affecter les valeurs inserer par l'utilisateur
{
    this-> ID_Equipements= ID_Equipements;
    this->Nom = Nom;
    this->Type = Type;
    this->Prix = Prix ;
    this->Quantite = Quantite;
}

bool Equipements::ajouter() //Ceci est la définition de la méthode "ajouter" de la classe "Equipements". La méthode retourne une valeur booléenne, "true" si l'insertion s'est bien passée et "false" sinon.
{
    QSqlQuery query; //Ici, on crée un nouvel objet "QSqlQuery" qui permettra d'exécuter la requête SQL sur la base de données.
       query.prepare("INSERT INTO Equipements (ID_EQUIPEMENTS,NOM ,TYPE ,PRIX, QUANTITE) " //Cette ligne prépare une requête SQL d'insertion dans la table "Equipements" de la base de données. La requête contient des marqueurs de paramètres qui seront remplacés par les valeurs correspondantes lors de l'exécution de la requête. Les valeurs seront associées aux marqueurs de paramètres dans les lignes suivantes.
                     "VALUES (:ID_Equipements, :Nom, :Type, :Prix, :Quantite)");
       query.bindValue(":ID_Equipements", ID_Equipements); //Ces lignes associent les valeurs des attributs de l'objet "Equipements" aux marqueurs de paramètres de la requête SQL. Les valeurs sont stockées dans l'objet QSqlQuery. Les noms des marqueurs de paramètres commencent par ":". Les valeurs associées sont celles des attributs de l'objet "Equipements". Par exemple, la valeur de "ID_Equipements" est associée au marqueur de paramètre ":ID_Equipements".
       query.bindValue(":Nom", Nom);
       query.bindValue(":Type", Type);
       query.bindValue(":Prix", Prix);
       query.bindValue(":Quantite", Quantite);
    //    query.exec();
       if(query.exec()){ //Cette partie exécute la requête SQL préparée dans la ligne précédente et vérifie si elle s'est exécutée avec succès. Si la requête a été exécutée avec succès, la méthode "ajouter" retourne "true". Sinon, elle retourne "false".
           return true;
      } else {
           return false;
}
}
QSqlQueryModel * Equipements::afficher() //Ceci est la définition de la méthode "afficher" de la classe "Equipements". La méthode retourne un pointeur vers un objet "QSqlQueryModel".
{
    QSqlQueryModel * model=new QSqlQueryModel(); //ci, on crée un nouvel objet "QSqlQueryModel" qui contiendra les résultats de la requête SQL. Ce modèle sera utilisé pour afficher les données dans une vue (par exemple, un tableau ou un formulaire) dans l'interface utilisateur. On crée un nouveau modèle avec l'opérateur "new" et on le stocke dans un pointeur "model".
 model->setQuery("SELECT * FROM Equipements");//Cette ligne exécute une requête SQL pour récupérer toutes les données de la table "Equipements". Les résultats de la requête seront stockés dans l'objet "model".

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Equipements")); //Ces lignes définissent les en-têtes de colonnes pour le modèle "model". Les en-têtes sont définis pour les 5 colonnes de la table "Equipements" (ID_Equipements, Nom, Type, Prix et Quantite). Le premier argument de la méthode "setHeaderData" est l'indice de la colonne (commençant par 0), le deuxième argument est l'orientation de l'en-tête (horizontal ou vertical) et le troisième argument est le texte de l'en-tête.
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

    return model; // Cette ligne retourne le pointeur vers l'objet "model" qui contient les résultats de la requête SQL ainsi que les en-têtes de colonnes définis précédemment.
}


bool Equipements::supprimer(QString ID_Equipements)//Ceci est la définition de la méthode "supprimer" de la classe "Equipements". La méthode prend un paramètre de type QString qui représente l'identifiant de l'équipement à supprimer. La méthode retourne un booléen indiquant si la suppression a réussi ou non.
{
QSqlQuery query;//Ici, on crée un objet "QSqlQuery" qui sera utilisé pour exécuter une requête SQL sur la base de données. Cet objet sera utilisé pour préparer et exécuter la requête de suppression.
query.prepare("Delete from Equipements where ID_EQUIPEMENTS= :id");//Cette ligne prépare une requête SQL de suppression pour supprimer l'enregistrement correspondant à l'identifiant de l'équipement donné. La requête SQL est préparée en utilisant le nom de la table "Equipements" et la clause "where" pour spécifier la condition de suppression (ID_EQUIPEMENTS = :id). Le symbole ":" avant "id" indique qu'il s'agit d'un paramètre nommé de la requête SQL.
query.bindValue(":id",ID_Equipements);//Cette ligne associe la valeur de l'identifiant de l'équipement passé en paramètre à la valeur du paramètre nommé de la requête SQL ":id". Cette étape est nécessaire pour que la requête SQL puisse être exécutée avec les valeurs appropriées.
query.exec();//Cette ligne exécute la requête SQL préparée précédemment pour supprimer l'enregistrement correspondant à l'identifiant de l'équipement donné. La méthode "exec" de l'objet "QSqlQuery" est utilisée pour exécuter la requête SQL.
return query.exec();
}

bool Equipements :: modifier(QString recherche)
{
    QSqlQuery query;
        query.prepare("UPDATE EQUIPEMENTS SET ID_EQUIPEMENTS = :id_equipements, NOM = :nom, TYPE = :type, PRIX = :prix, QUANTITE = :quantite WHERE ID_EQUIPEMENTS LIKE '"+recherche+"%'");
        query.bindValue(":id_equipements", ID_Equipements);
        query.bindValue(":nom", Nom);
        query.bindValue(":type", Type);
        query.bindValue(":prix", Prix);
        query.bindValue(":quantite", Quantite);
        query.exec();
       return  query.exec();
}
QSqlQueryModel* Equipements ::rechercherID(QString recherche)
{
    QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT * FROM Equipements where ID_EQUIPEMENTS LIKE '"+recherche+"%' ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Equipements"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

    return model;

}
