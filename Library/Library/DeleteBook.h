#pragma once

#include <QWidget>
#include "ui_DeleteBook.h"

class DeleteBook : public QWidget
{
	Q_OBJECT

public:
	DeleteBook(QWidget *parent = Q_NULLPTR);
	~DeleteBook();

private:
	Ui::DeleteBook ui;
};
