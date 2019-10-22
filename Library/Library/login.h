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
	// loginPushButton����clicked�ź�ʱ�������������
	// �ж�������û����������Ƿ�ƥ��
	// ����û�����������ȷ�����ҵ�ͼ��ݽ���
	// �����Ա���棨�û�����admin��
	// ����û��������������ʾ�û��������
	//void LoginSystemSlot();

private:
	 QPushButton *bt;
};

#endif // LOGIN_H