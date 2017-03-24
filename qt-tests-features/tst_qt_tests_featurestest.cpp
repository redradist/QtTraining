#include <QString>
#include <QtTest>

class Qt_Tests_FeaturesTest : public QObject
{
    Q_OBJECT

public:
    Qt_Tests_FeaturesTest();

private Q_SLOTS:
    void testCase1();
    void testCase2();
    void testCase3_data();
    void testCase3();
};

Qt_Tests_FeaturesTest::Qt_Tests_FeaturesTest()
{
}

void Qt_Tests_FeaturesTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void Qt_Tests_FeaturesTest::testCase2()
{
    QVERIFY2(QString::number(2) == "2", "Failure");
    QVERIFY2(QString::number(2) == "2", "Failure");
    QVERIFY2(QString::number(1) == "1", "Failure");
}

void Qt_Tests_FeaturesTest::testCase3_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<int>("result");
    QTest::newRow("Testing #0") << "123" << 123;
    QTest::newRow("Testing #1") << "213" << 213;
}

void Qt_Tests_FeaturesTest::testCase3()
{
    QFETCH(QString, string);
    QFETCH(int, result);

    QCOMPARE(string.toInt(), result);
}

QTEST_APPLESS_MAIN(Qt_Tests_FeaturesTest)

#include "tst_qt_tests_featurestest.moc"
