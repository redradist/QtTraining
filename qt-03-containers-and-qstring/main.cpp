#include <QCoreApplication>
#include <QDebug>
#include <QStack>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> names;
    names << "Mary" << "Ann" << "Charlynn" << "Marylynn" << "Margaret"
          << "Kate" << "Rose" << "Gwendolyn";


    // TODO: using Java-style iterators print the longest name from the list
    // use QString::arg to output message with this name
    {
        QListIterator<QString> nameIter(names);
        QString longestName;
        while (nameIter.hasNext())
        {
            if (longestName.isNull() or
                longestName < nameIter.peekNext())
            {
                longestName = nameIter.next();
            }
        }
        qDebug() << longestName;
    }

    // TODO: using STL-style iterators print the shortest name from the list
    // use QString::prepend and append to output message with this name
    {
        QString shortestName;
        for (auto iter = names.begin(); names.end() != iter; ++iter)
        {
            if (shortestName.isNull() or
                shortestName > *iter)
            {
                shortestName = *iter;
            }
        }
        qDebug() << shortestName;
    }

    // TODO: using foreach and QStringList show all names with "lynn" suffix
    // and print it separated by ',' as one string
    QStringList containedNames;
    for (QString & name : names)
    {
        if (name.contains("lynn"))
        {
            containedNames.append(name);
        }
    }

    QString oneString = containedNames.join(" ,");
    qDebug() << oneString;

    // print all names in reverse order
    // TODO: 1. Using QStack
    QStack<QString> stack;
    for(QString name : containedNames)
    {
        stack.push_back(name);
    }

    for (QString name : stack)
    {
        qDebug() << name;
    }

    // TODO: 2. Using other QList
    QList<QString> list(containedNames);
    for (QString name : list)
    {
        qDebug() << name;
    }

    // TODO: 3. Without other containers
    for (QString name : containedNames)
    {
        qDebug() << name;
    }

    return a.exec();
}
