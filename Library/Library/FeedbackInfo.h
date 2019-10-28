#pragma once

#include <QWidget>
#include "ui_FeedbackInfo.h"

class FeedbackInfo : public QWidget
{
	Q_OBJECT

public:
	FeedbackInfo(QWidget *parent = Q_NULLPTR);
	~FeedbackInfo();

private:
	Ui::FeedbackInfo ui;
};
