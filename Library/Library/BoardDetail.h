#pragma once

#include <QWidget>
#include "ui_BoardDetail.h"

class BoardDetail : public QWidget
{
	Q_OBJECT

public:
	BoardDetail(QWidget *parent = Q_NULLPTR);
	~BoardDetail();

private:
	Ui::BoardDetail ui;
};
