//#include <QtTest/QtTest>

//class ModelTest : public QObject
//{
//	Q_OBJECT
//		private slots:
//	void toUpper();
//};
//
//void ModelTest::toUpper()
//{
//	QString str = "Hello";
//	QVERIFY(str.toUpper() == "HELLO");
//}
//
//QTEST_MAIN(ModelTest)
//#include "modelTest.moc"

//class ModelTest : public QObject
//{
//	Q_OBJECT
//		private slots:
//	void initTestCase()
//	{
//		qDebug("called before everything else");
//	}
//	void myFirstTest()
//	{
//		QVERIFY(1 == 1);
//	}
//	void mySecondTest()
//	{
//		QVERIFY(1 != 2);
//	}
//	void cleanupTestCase()
//	{
//		qDebug("called after myFirstTest and mySecondTest");
//	}
//};
//QTEST_MAIN(ModelTest)
//#include "modelTest.moc"

#include <QString>
#include <QtTest>

class FirstTestTest : public QObject
{
	Q_OBJECT

public:
	FirstTestTest();

	private Q_SLOTS:
	void testCase1();
};

FirstTestTest::FirstTestTest()
{
}

void FirstTestTest::testCase1()
{
	QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(FirstTestTest)

#include "tst_modelTest.moc"
