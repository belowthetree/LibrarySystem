#pragma once

#include <QWidget>
#include "ui_DeleteMessage.h"

class DeleteMessage : public QWidget
{
	Q_OBJECT

public:
	DeleteMessage(QWidget *parent = Q_NULLPTR);
	~DeleteMessage();

private:
	Ui::DeleteMessage ui;
};
