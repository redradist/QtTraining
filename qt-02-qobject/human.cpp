#include <QDebug>
#include "human.h"

Human::Human(int age, bool sex, QObject *parent)
    : QObject(parent)
    , age_(age)
    , sex_(sex)
{

}

int Human::age() const
{
    return age_;
}

bool Human::sex() const
{
    return sex_;
}
