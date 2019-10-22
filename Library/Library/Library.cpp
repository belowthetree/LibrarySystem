#include "Library.h"


Library::Library(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setParent(parent);
	lg = new Login();
	QObject::connect(ui.tabWidget, SIGNAL(tabBarClicked(int)), this, SLOT(LoginSlot(int)));

}

Library::~Library() {

}

void Library::LoginSlot(int index) {
	if (index == 5) {
		//Login* w = new Login(); //�����ж��Ƿ��¼
		this->hide();
		lg->show();
	}
}