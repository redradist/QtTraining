#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class BankAccount;
class Bank;
class Logger;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void doAction();
    void totalBalanceChanged(long newTotalBalance);

private:
    Ui::MainWindow *ui;

private:
    Bank        * bank;
    BankAccount * bankAccount;
    Logger      * logger;

};

#endif // MAINWINDOW_H
