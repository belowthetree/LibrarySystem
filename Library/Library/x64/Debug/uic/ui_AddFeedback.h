/********************************************************************************
** Form generated from reading UI file 'AddFeedback.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFEEDBACK_H
#define UI_ADDFEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFeedback
{
public:
    QGroupBox *groupBox;
    QPushButton *comfirmPushButton;
    QPushButton *cancelPushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *AddFeedback)
    {
        if (AddFeedback->objectName().isEmpty())
            AddFeedback->setObjectName(QStringLiteral("AddFeedback"));
        AddFeedback->resize(745, 593);
        groupBox = new QGroupBox(AddFeedback);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 460, 321, 61));
        comfirmPushButton = new QPushButton(groupBox);
        comfirmPushButton->setObjectName(QStringLiteral("comfirmPushButton"));
        comfirmPushButton->setGeometry(QRect(10, 10, 112, 34));
        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(200, 10, 112, 34));
        label = new QLabel(AddFeedback);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 190, 111, 41));
        textEdit = new QTextEdit(AddFeedback);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 80, 481, 331));

        retranslateUi(AddFeedback);

        QMetaObject::connectSlotsByName(AddFeedback);
    } // setupUi

    void retranslateUi(QWidget *AddFeedback)
    {
        AddFeedback->setWindowTitle(QApplication::translate("AddFeedback", "AddFeedback", Q_NULLPTR));
        groupBox->setTitle(QString());
        comfirmPushButton->setText(QApplication::translate("AddFeedback", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AddFeedback", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("AddFeedback", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\217\215\351\246\210\345\206\205\345\256\271\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFeedback: public Ui_AddFeedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFEEDBACK_H
