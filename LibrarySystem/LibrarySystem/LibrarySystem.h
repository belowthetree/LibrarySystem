#pragma once

#include <QtWidgets/QDialog>
#include "ui_LibrarySystem.h"

class LibrarySystem : public QDialog
{
	Q_OBJECT

public:
	LibrarySystem(QWidget *parent = Q_NULLPTR);

private:
	Ui::LibrarySystemClass ui;
};
