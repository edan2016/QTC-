#ifndef QT_TEST_H
#define QT_TEST_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_test.h"

class QT_test : public QMainWindow
{
	Q_OBJECT

public:
	QT_test(QWidget *parent = 0);
	~QT_test();

private:
	Ui::QT_testClass ui;
};

#endif // QT_TEST_H
