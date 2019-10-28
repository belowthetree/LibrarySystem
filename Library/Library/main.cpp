#include "Library.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Library w;
	w.show();
	return a.exec();
}
