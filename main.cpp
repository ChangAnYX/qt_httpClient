#include "mainwindow.h"
#include "httpclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    {
        QString url("http://localhost:8008/test");

        HttpClient(url).debug(true).param("aa", "困困").header("token", "md5sum").success([](const QString &response) {
                    qDebug().noquote() << response;
                }).fail([](const QString &error, int errorCode) {
                    qDebug().noquote() << error << errorCode;
                }).get();

    }
    MainWindow w;
    w.show();
    return a.exec();
}
