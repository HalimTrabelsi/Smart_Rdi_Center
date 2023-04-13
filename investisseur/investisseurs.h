#ifndef INVESTISSEURS_H
#define INVESTISSEURS_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class investisseurs
{
    QString nomInv, descInv;
    double budgetInv;
    QDate dateInv;
private:
    double avgBudget;
    double minBudget;
    double maxBudget;
    double sumBudget;

public:
    // Constructors
    investisseurs(){}
    investisseurs(QString, QString, double, QDate);

    // Getters
    QString getNom() { return nomInv; }
    QString getDescription() { return descInv; }
    double getBudget() { return budgetInv; }
    QDate getDateinvest() { return dateInv; }

    // Setters
    void setNom(QString name) { nomInv = name; }
    void setBudget(double budget) { budgetInv = budget; }
    void setDescription(QString desc) { descInv = desc; }
    void setDate(QDate date) { dateInv = date; }

    // Database functions
    bool createInvest();
    bool updateInvest(QString searchName);
    QSqlQueryModel* showInvest();
    bool deleteInvest(QString);
    QSqlQueryModel* searchInvest(QString);
    QSqlQueryModel* sortInvest();
    void sendConfirmationMail(const QString &from, const QString &to,
                        const QString &subject, const QString &body);
   // Stastistics functions
    double getAvgBudget() const;
    double getMinBudget() const;
    double getMaxBudget() const;
    double getSumBudget() const;
    double getBudgetPerYear() const;
    double statistics();
};

#endif // INVESTISSEURS_H
