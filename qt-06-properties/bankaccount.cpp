#include "bankaccount.h"
#include <QDebug>

BankAccount::BankAccount(QObject *parent) : QObject(parent)
{
    m_balance = 5000;
    connect(this, SIGNAL(holderNameChanged(QString)), this, SLOT(holderNameUpdated(QString)));
}

void BankAccount::deposit(long amount)
{
    m_balance += amount;
}

void BankAccount::withdraw(long amount)
{
    m_balance -= amount;
}

QString BankAccount::holderName() const
{
    qDebug() << "Value is read: " << name;
    return name;
}

void BankAccount::setHolderName(QString name)
{
    this->name = name;
    qDebug() << "Value is set to: " << name;
    holderNameChanged(name);
}

long BankAccount::balance() const
{
    return m_balance;
}

void BankAccount::holderNameUpdated(const QString & name)
{
    qDebug() << "Value is changed: " << name;
}
