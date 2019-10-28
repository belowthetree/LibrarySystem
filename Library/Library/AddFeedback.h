#pragma once

#include <QWidget>
#include "ui_AddFeedback.h"

class AddFeedback : public QWidget
{
	Q_OBJECT

public:
	AddFeedback(QWidget *parent = Q_NULLPTR);
	~AddFeedback();

private:
	Ui::AddFeedback ui;
};
