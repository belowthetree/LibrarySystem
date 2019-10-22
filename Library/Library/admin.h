#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_admin.h"

class QstackedWidget;

class Admin : public QMainWindow
{
	Q_OBJECT

public:
	//Admin(QWidget *parent = Q_NULLPTR);

private:
	Ui::AdminClass ui;
};