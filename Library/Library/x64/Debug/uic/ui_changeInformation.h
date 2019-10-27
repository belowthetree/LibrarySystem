/********************************************************************************
** Form generated from reading UI file 'ChangeInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEINFORMATION_H
#define UI_CHANGEINFORMATION_H

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

class Ui_ChangeInformation
{
public:
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QPushButton *confirmPushButton;
    QPushButton *cancelPushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QLabel *label_5;

    void setupUi(QWidget *ChangeInformation)
    {
        if (ChangeInformation->objectName().isEmpty())
            ChangeInformation->setObjectName(QStringLiteral("ChangeInformation"));
        ChangeInformation->resize(695, 470);
        textEdit = new QTextEdit(ChangeInformation);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(260, 40, 291, 31));
        groupBox_3 = new QGroupBox(ChangeInformation);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(180, 360, 371, 51));
        confirmPushButton = new QPushButton(groupBox_3);
        confirmPushButton->setObjectName(QStringLiteral("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(30, 10, 112, 34));
        cancelPushButton = new QPushButton(groupBox_3);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(230, 10, 112, 34));
        label_6 = new QLabel(ChangeInformation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 180, 101, 31));
        QFont font;
        font.setPointSize(11);
        label_6->setFont(font);
        label_7 = new QLabel(ChangeInformation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 250, 101, 31));
        label_7->setFont(font);
        label_8 = new QLabel(ChangeInformation);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 110, 101, 31));
        label_8->setFont(font);
        textEdit_3 = new QTextEdit(ChangeInformation);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(260, 180, 291, 31));
        textEdit_2 = new QTextEdit(ChangeInformation);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(260, 110, 291, 31));
        textEdit_4 = new QTextEdit(ChangeInformation);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(260, 250, 291, 31));
        label_5 = new QLabel(ChangeInformation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 40, 101, 31));
        label_5->setFont(font);

        retranslateUi(ChangeInformation);

        QMetaObject::connectSlotsByName(ChangeInformation);
    } // setupUi

    void retranslateUi(QWidget *ChangeInformation)
    {
        ChangeInformation->setWindowTitle(QApplication::translate("ChangeInformation", "ChangeInformation", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        confirmPushButton->setText(QApplication::translate("ChangeInformation", "\347\241\256\350\256\244", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("ChangeInformation", "\345\217\226\346\266\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("ChangeInformation", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("ChangeInformation", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("ChangeInformation", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ChangeInformation", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeInformation: public Ui_ChangeInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEINFORMATION_H
