#include "offermodel.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>

OfferModel::OfferModel(QObject *parent) : QObject(parent)
{

}

QVector<QString> OfferModel::getHeadline()
{
    QVector<QString> headlines;

    auto db = connectToDB();
    QSqlQuery query("SELECT headline FROM T_offer");
//        auto idIndex = query.record().indexOf("ID");
//        auto headlineIndex = query.record().indexOf("headline");
    while (query.next())
    {
//        QString id = query.value(idIndex).toString();
        headlines.push_back(query.value(0).toString());
        qDebug() << headlines.last();
    }
    return headlines;
}

QSqlDatabase OfferModel::connectToDB()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};Server=TEST-PC\\SQLEXPRESS;Database=SWE_Prototype;Uid=sa;Port=1433;Pwd=sa2014;WSID=.");
    if(!db.open())
    {
        throw ConnectionFaild("could not connect to DB");
    }
    return db;
}

