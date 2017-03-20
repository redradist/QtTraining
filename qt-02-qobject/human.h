#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>

class Human : public QObject
{
    Q_OBJECT
public:
    explicit Human(int age, bool sex, QObject *parent = 0);

public:

    int age() const;
    bool sex() const;

signals:

public slots:

private:

    QString name_;
    int age_;
    bool sex_;

};

#endif // HUMAN_H
