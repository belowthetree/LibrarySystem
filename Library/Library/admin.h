#pragma once

#include <QWidget>
#include "ui_Admin.h"

class Admin : public QWidget
{
	Q_OBJECT

public:
	Admin(QWidget *parent = Q_NULLPTR);
	~Admin();

private:
	Ui::Admin ui;
};
