#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <QObject>

class BankAccount : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("Author", "Denis")\
    Q_CLASSINFO("License", "GPL")\

    // TODO: declare QString holderName property that's represents account holder name
    //       this property must have getter and setter
    Q_PROPERTY(QString holderName READ holderName WRITE setHolderName NOTIFY holderNameChanged)

    // TODO: declare long balance property
    //       this property should be read-only and associated with variable m_balance
    Q_PROPERTY(long balance MEMBER m_balance READ balance CONSTANT)

public:
    explicit BankAccount(QObject *parent = 0);

    void deposit(long amount);
    void withdraw(long amount);

    // TODO: declare and implement holderName getter/setter
    QString holderName() const;

    void setHolderName(QString name);

    // TODO: decalre and implement balance getter
    long balance() const;

signals:

    void holderNameChanged(const QString & name);

private slots:

    void holderNameUpdated(const QString & name);

private:

    // TODO: declare holderName
    long m_balance;
    QString name;
};

#endif // BANKACCOUNT_H
