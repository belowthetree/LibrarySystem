#pragma once

#include <QWidget>
#include "ui_ChangeInformation.h"

class ChangeInformation : public QWidget
{
	Q_OBJECT

public:
	ChangeInformation(QWidget *parent = Q_NULLPTR);
	~ChangeInformation();

private:
	Ui::ChangeInformation ui;
};
