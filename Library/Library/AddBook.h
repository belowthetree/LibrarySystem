#pragma once

#include <QWidget>
#include "ui_AddBook.h"

class AddBook : public QWidget
{
	Q_OBJECT

public:
	AddBook(QWidget *parent = Q_NULLPTR);
	~AddBook();

private:
	Ui::AddBook ui;
};
