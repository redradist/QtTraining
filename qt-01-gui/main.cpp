#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QObject * obj = &a;
    qobject_cast<QApplication*>(obj);

    return a.exec();
}
