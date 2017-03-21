#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // NOTES
    QPointer p(MainWindow);

    // Signals and slots


    return a.exec();
}
