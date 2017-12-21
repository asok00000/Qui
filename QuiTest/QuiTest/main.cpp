#include "quitest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QuiTest w;
	w.show();
	return a.exec();
}
