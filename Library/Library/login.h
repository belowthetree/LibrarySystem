#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>


namespace Ui {
	class Login;
}

class Login : public QWidget
{
	Q_OBJECT

public:
	explicit Login(QWidget *parent = 0);
	//~Login();

signals:
	void mySignal();
	void mySignalParm(int, QString);

public slots:
	// loginPushButton发出clicked信号时，触发这个函数
	// 判断输入的用户名与密码是否匹配
	// 如果用户名与密码正确，打开我的图书馆界面
	// 或管理员界面（用户名是admin）
	// 如果用户名或密码错误，提示用户输入错误
	//void LoginSystemSlot();

private:
	 QPushButton *bt;
};

#endif // LOGIN_H