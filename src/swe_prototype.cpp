#include <QApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#include <memory>

#include "offermodel.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    OfferModel model;
    model.getData();



    QQmlApplicationEngine engine(QUrl("qrc:/gui/Interface.qml"));

    return app.exec();
}
