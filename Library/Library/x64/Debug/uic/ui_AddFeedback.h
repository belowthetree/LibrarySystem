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

class Ui_Form
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QPushButton *comfirmPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(807, 549);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 160, 111, 41));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 50, 481, 331));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 430, 321, 61));
        comfirmPushButton = new QPushButton(groupBox);
        comfirmPushButton->setObjectName(QStringLiteral("comfirmPushButton"));
        comfirmPushButton->setGeometry(QRect(10, 10, 112, 34));
        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(200, 10, 112, 34));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "AddFeedback", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\217\215\351\246\210\345\206\205\345\256\271\357\274\232</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        comfirmPushButton->setText(QApplication::translate("Form", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("Form", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFEEDBACK_H
