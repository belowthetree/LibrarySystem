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
	//打开用户登录界面的槽
	void LoginSlot(int index);
	//打开修改用户信息界面的槽
	//void ChangeInformationSlot();

private:
	Ui::Library ui;

	Login* lg;
};

#endif // LIBRARY_H




