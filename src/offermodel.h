#ifndef OFFERMODEL_H
#define OFFERMODEL_H

#include <QObject>
#include <QSqlDatabase>
#include <QVector>
#include <QString>

#include <stdexcept>

class ConnectionFaild : public std::runtime_error
{
public:
    ConnectionFaild(const char* what) : runtime_error(what)   { }
};



class OfferModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVector<QString> headlines READ getHeadline)
public:
    explicit OfferModel(QObject *parent = nullptr);

signals:

public slots:
    QVector<QString> getHeadline();

private:
    QSqlDatabase connectToDB();
};

#endif // OFFERMODEL_H
