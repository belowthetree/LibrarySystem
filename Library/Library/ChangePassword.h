#pragma once

#include <QWidget>
#include "ui_ChangePassword.h"

class ChangePassword : public QWidget
{
	Q_OBJECT

public:
	ChangePassword(QWidget *parent = Q_NULLPTR);
	~ChangePassword();

private:
	Ui::ChangePassword ui;
};
