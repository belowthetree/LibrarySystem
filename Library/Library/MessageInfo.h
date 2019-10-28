#pragma once

#include <QWidget>
#include "ui_MessageInfo.h"

class MessageInfo : public QWidget
{
	Q_OBJECT

public:
	MessageInfo(QWidget *parent = Q_NULLPTR);
	~MessageInfo();

private:
	Ui::MessageInfo ui;
};
