#pragma once

#include <QWidget>
#include "ui_AddMessage.h"

class AddMessage : public QWidget
{
	Q_OBJECT

public:
	AddMessage(QWidget *parent = Q_NULLPTR);
	~AddMessage();

private:
	Ui::AddMessage ui;
};
