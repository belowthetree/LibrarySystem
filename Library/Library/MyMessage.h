#pragma once

#include <QWidget>
#include "ui_MyMessage.h"

class MyMessage : public QWidget
{
	Q_OBJECT

public:
	MyMessage(QWidget *parent = Q_NULLPTR);
	~MyMessage();

private:
	Ui::MyMessage ui;
};
