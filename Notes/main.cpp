#include "mainwindow.h"
#include <QApplication>
#include <QPointer>
#include <QLineEdit>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // NOTES
    QPointer<QObject> p(&w);

    // Signals and slots

    // GUI Widgets
    QLineEdit *phoneEdit = new QLineEdit(&w);
    QLabel *phoneLabel = new QLabel(&w);
    phoneLabel->setBuddy(phoneEdit);
    // setBuddy ()

    return a.exec();
}
