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
    Q_PROPERTY(QString headline READ nextHeadline)
public:
    explicit OfferModel(QObject *parent = nullptr);

signals:

public slots:
    void getHeadline();
    QString nextHeadline();

private:
    QVector<QString> headlines;
    QString m_headline;

    QSqlDatabase connectToDB();
};

#endif // OFFERMODEL_H
