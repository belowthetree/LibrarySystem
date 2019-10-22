#ifndef LIBRARY_H
#define LIBRARY_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtCore/QDebug>
#include "ui_Library.h"
#include"login.h"
#include"ui_Login.h"
class QstackedWidget;

class Library : public QMainWindow
{
	Q_OBJECT

public:
	explicit Library(QWidget *parent = Q_NULLPTR);
	~Library();

signals:

public slots:
	//���û���¼����Ĳ�
	void LoginSlot(int index);
	//���޸��û���Ϣ����Ĳ�
	//void ChangeInformationSlot();

private:
	Ui::Library ui;

	Login* lg;
};

#endif // LIBRARY_H




