#pragma once

#include <QWidget>
#include "ui_EditBoard.h"

class EditBoard : public QWidget
{
	Q_OBJECT

public:
	EditBoard(QWidget *parent = Q_NULLPTR);
	~EditBoard();

private:
	Ui::EditBoard ui;
};
