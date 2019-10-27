#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Library.h"

class Library : public QMainWindow
{
	Q_OBJECT

public:
	Library(QWidget *parent = Q_NULLPTR);

private:
	Ui::LibraryClass ui;
};
