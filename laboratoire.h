#ifndef LABORATOIRE_H
#define LABORATOIRE_H

#include <QString>
#include <QDate>

class Laboratoire
{
public:
    Laboratoire();
    Laboratoire(int id, const QString &nom, const QString &description, const QString &statut, const QDate &date, const QString &type);

    int getId() const;
    void setId(int id);

    QString getNom() const;
    void setNom(const QString &nom);

    QString getDescription() const;
    void setDescription(const QString &description);

    QString getStatut() const;
    void setStatut(const QString &statut);

    QDate getDate() const;
    void setDate(const QDate &date);

    QString getType() const;
    void setType(const QString &type);

private:
    int m_id;
    QString m_nom;
    QString m_description;
    QString m_statut;
    QDate m_date;
    QString m_type;
};

#endif // LABORATOIRE_H
