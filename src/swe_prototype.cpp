#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlComponent>
#include <QDebug>

#include <memory>

#include "offermodel.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    OfferModel model;
    try
    {
        model.getHeadline();
    }
    catch(ConnectionFaild& excep)
    {
        qDebug() << excep.what();
    }



//    QQmlApplicationEngine engine(QUrl("qrc:/gui/Interface.qml"));
    QQmlEngine engine;
    engine.rootContext()->setContextProperty("model", &model);
    QQmlComponent component(&engine, QUrl("qrc:/gui/Interface.qml"));
    component.create();


    return app.exec();
}
