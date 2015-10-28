#ifndef OFFERMODEL_H
#define OFFERMODEL_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>

#include <stdexcept>

class ConnectionFaild : public std::runtime_error
{
public:
    ConnectionFaild(const char* what) : runtime_error(what)   { }
//    const char* what()  { return explanation; }

//    const char* explanation;
    virtual ~ConnectionFaild()  { qDebug() << "kill me!"; }
};


class OfferModel : public QObject
{
    Q_OBJECT
public:
    explicit OfferModel(QObject *parent = nullptr);
    void getData();

signals:

public slots:

private:
    QSqlDatabase connectToDB();
};

#endif // OFFERMODEL_H
