#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_quitest.h"

class QuiTest : public QMainWindow
{
	Q_OBJECT

public:
	QuiTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QuiTestClass ui;
};
