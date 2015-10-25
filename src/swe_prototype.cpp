#include <QApplication>
#include <QQmlApplicationEngine>
#include <memory>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine(QUrl("qrc:/gui/Interface.qml"));

    return app.exec();
}
