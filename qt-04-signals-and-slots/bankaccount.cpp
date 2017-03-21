#include "bankaccount.h"

BankAccount::BankAccount(Bank *parentBank) : QObject(parentBank)
{
    m_balance = 0;
    // TODO: connect Bank slots to BankAccount signals
}

long BankAccount::balance() const
{
    return m_balance;
}

void BankAccount::setBalance(long newBalance)
{
    m_balance = newBalance;
    // TODO: add here signal emition
    emit balanceChanged(m_balance);
}

void BankAccount::deposit(long amount)
{
    m_balance += amount;
    // TODO: implement this function
    emit balanceChanged(m_balance);
}

void BankAccount::withdraw(long amount)
{
    // TODO: implement this function
    if (m_balance >= amount)
    {
        m_balance -= amount;
        emit balanceChanged(m_balance);
    }
}
