/********************************************************************************
** Form generated from reading UI file 'AddMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMESSAGE_H
#define UI_ADDMESSAGE_H

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

class Ui_AddMessage
{
public:
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *AddMessage)
    {
        if (AddMessage->objectName().isEmpty())
            AddMessage->setObjectName(QStringLiteral("AddMessage"));
        AddMessage->resize(872, 593);
        label_3 = new QLabel(AddMessage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 40, 101, 31));
        textEdit_3 = new QTextEdit(AddMessage);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(250, 110, 411, 271));
        groupBox = new QGroupBox(AddMessage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 450, 381, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 112, 34));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 20, 112, 34));

        retranslateUi(AddMessage);

        QMetaObject::connectSlotsByName(AddMessage);
    } // setupUi

    void retranslateUi(QWidget *AddMessage)
    {
        AddMessage->setWindowTitle(QApplication::translate("AddMessage", "AddMessage", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddMessage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\225\231\350\250\200\345\206\205\345\256\271</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("AddMessage", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AddMessage", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddMessage: public Ui_AddMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMESSAGE_H
