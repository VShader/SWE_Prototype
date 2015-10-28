#include "offermodel.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>

OfferModel::OfferModel(QObject *parent) : QObject(parent)
{

}

void OfferModel::getData()
{
    try
    {
        auto db = connectToDB();

        QSqlQuery query("SELECT * FROM T_offer");

        auto idIndex = query.record().indexOf("ID");
        auto headlineIndex = query.record().indexOf("headline");
          while (query.next()) {
              QString id = query.value(idIndex).toString();
              QString headline = query.value(headlineIndex).toString();
              qDebug() << id << " " << headline;
          }
    }
    catch(ConnectionFaild& excep)
    {
        qDebug() << excep.what();
    }
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

