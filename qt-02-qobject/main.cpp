#include <QCoreApplication>
#include <QDebug>
#include "Human.h"

void printTreeInfo(QObject *parent)
{
    // TODO: print here info about all nodes
    qDebug() << "Name: " << parent->objectName();
    qDebug() << "Age: "  << qobject_cast<Human*>(parent)->age();
    qDebug() << "Sex: "  << qobject_cast<Human*>(parent)->sex();
    for (QObject * child: parent->children())
    {
        qDebug() << child->objectName();
        printTreeInfo(child);
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Human* parent;

    // TODO: create here required hierarchy
    parent = new Human(54, true);
    parent->setObjectName("Lucas Grey");
    Human* son = new Human(32, true, parent);
    son->setObjectName("Jason Grey");
    Human* dauther = new Human(28, false, parent);
    dauther->setObjectName("Mary Grey");
    (new Human(5, true, son))->setObjectName("Sean Grey");
    (new Human(1, false, son))->setObjectName("Hannay Grey");
    (new Human(1, false, son))->setObjectName("Jessica Grey");
    (new Human(2, true, dauther))->setObjectName("Fred Smith");
    (new Human(2, false, dauther))->setObjectName("Jane Smith");
	// TODO: dump tree info using standard Qt method
    printTreeInfo(parent);

    qDebug() << "----- DumpObjectTree -----";
    parent->dumpObjectTree();
    // TODO: delete here what need only
    delete parent;

    return a.exec();
}
