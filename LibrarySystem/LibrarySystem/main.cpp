#include "LibrarySystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LibrarySystem w;
	w.show();
	return a.exec();
}
