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
    QPointer p(MainWindow);

    // Signals and slots

    // GUI Widgets
    QLineEdit *phoneEdit = new QLineEdit(this);
    QLabel *phoneLabel = new QLabel(this);
    phoneLabel->setBuddy(phoneEdit);
    // setBuddy ()

    return a.exec();
}
