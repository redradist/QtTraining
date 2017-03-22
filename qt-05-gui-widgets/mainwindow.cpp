#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegExp>
#include "bank.h"
#include "bankaccount.h"
#include "logger.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    bank(new Bank(this)),
    bankAccount(new BankAccount(bank)),
    logger(new Logger(this))
{
    ui->setupUi(this);

    connect(bankAccount, &BankAccount::balanceChanged, logger, &Logger::logAccountChange);
    connect(bankAccount, &BankAccount::balanceChanged, bank, &Bank::totalAccountBalanceChanged);
    connect(bank, &Bank::totalBalanceChanged, logger, &Logger::logTotalBalance);
    connect(bank, &Bank::totalBalanceChanged, this, &MainWindow::totalBalanceChanged);

    ui->deposit->setChecked(true);
    ui->TotalBalance_Value->setAlignment(Qt::AlignRight);
    ui->TotalBalance_Value->setText("0");
    QRegExp rx("[0-9]*");
    ui->Amount_Value->setValidator(new QRegExpValidator (rx, this));

    bankAccount->setBalance(0);
    connect(ui->buttonDo, SIGNAL(clicked()), this, SLOT(doAction()));

    ui->gridLayout->activate();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doAction()
{
    if (!(ui->Amount_Value->text().isNull() && ui->Amount_Value->text().isEmpty()))
    {
        long balance = ui->Amount_Value->text().toLong();
        if (ui->deposit->isChecked())
        {
            bankAccount->deposit(balance);
        }
        else
        {
            bankAccount->withdraw(balance);
        }
    }
}

void MainWindow::totalBalanceChanged(long newTotalBalance)
{
    ui->TotalBalance_Value->setText(QString::number(newTotalBalance));
}
