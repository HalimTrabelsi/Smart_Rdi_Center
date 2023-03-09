#include "laboratoire.h"

Laboratoire::Laboratoire()
    : m_id(0), m_nom(""), m_description(""), m_statut(""), m_date(QDate()), m_type("")
{
}

Laboratoire::Laboratoire(int id, const QString &nom, const QString &description, const QString &statut, const QDate &date, const QString &type)
    : m_id(id), m_nom(nom), m_description(description), m_statut(statut), m_date(date), m_type(type)
{
}

int Laboratoire::getId() const
{
    return m_id;
}

void Laboratoire::setId(int id)
{
    m_id = id;
}

QString Laboratoire::getNom() const
{
    return m_nom;
}

void Laboratoire::setNom(const QString &nom)
{
    m_nom = nom;
}

QString Laboratoire::getDescription() const
{
    return m_description;
}

void Laboratoire::setDescription(const QString &description)
{
    m_description = description;
}

QString Laboratoire::getStatut() const
{
    return m_statut;
}

void Laboratoire::setStatut(const QString &statut)
{
    m_statut = statut;
}

QDate Laboratoire::getDate() const
{
    return m_date;
}

void Laboratoire::setDate(const QDate &date)
{
    m_date = date;
}

QString Laboratoire::getType() const
{
    return m_type;
}

void Laboratoire::setType(const QString &type)
{
    m_type = type;
}
