#pragma once

#include <QWidget>
#include "ui_BookInfo.h"

class BookInfo : public QWidget
{
	Q_OBJECT

public:
	BookInfo(QWidget *parent = Q_NULLPTR);
	~BookInfo();

private:
	Ui::BookInfo ui;
};
