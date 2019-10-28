/********************************************************************************
** Form generated from reading UI file 'DeleteMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMESSAGE_H
#define UI_DELETEMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteMessage
{
public:
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *DeleteMessage)
    {
        if (DeleteMessage->objectName().isEmpty())
            DeleteMessage->setObjectName(QStringLiteral("DeleteMessage"));
        DeleteMessage->resize(779, 582);
        textEdit = new QTextEdit(DeleteMessage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 80, 311, 31));
        textBrowser_2 = new QTextBrowser(DeleteMessage);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(220, 180, 311, 241));
        groupBox_3 = new QGroupBox(DeleteMessage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(130, 440, 471, 71));
        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(40, 20, 112, 34));
        pushButton_13 = new QPushButton(groupBox_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(320, 20, 112, 34));
        pushButton = new QPushButton(DeleteMessage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 80, 112, 34));
        label_2 = new QLabel(DeleteMessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 170, 91, 31));
        label = new QLabel(DeleteMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 91, 31));

        retranslateUi(DeleteMessage);

        QMetaObject::connectSlotsByName(DeleteMessage);
    } // setupUi

    void retranslateUi(QWidget *DeleteMessage)
    {
        DeleteMessage->setWindowTitle(QApplication::translate("DeleteMessage", "DeleteMessage", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButton_12->setText(QApplication::translate("DeleteMessage", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("DeleteMessage", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteMessage", "\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeleteMessage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\225\231\350\250\200</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteMessage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\225\231\350\250\200\347\274\226\345\217\267</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteMessage: public Ui_DeleteMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMESSAGE_H
