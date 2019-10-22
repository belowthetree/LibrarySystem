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
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QWidget *DeleteMessage)
    {
        if (DeleteMessage->objectName().isEmpty())
            DeleteMessage->setObjectName(QStringLiteral("DeleteMessage"));
        DeleteMessage->resize(969, 576);
        label = new QLabel(DeleteMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 90, 91, 31));
        textEdit = new QTextEdit(DeleteMessage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 90, 311, 31));
        label_2 = new QLabel(DeleteMessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 180, 91, 31));
        pushButton = new QPushButton(DeleteMessage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 90, 112, 34));
        textBrowser_2 = new QTextBrowser(DeleteMessage);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(300, 190, 311, 241));
        groupBox_3 = new QGroupBox(DeleteMessage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(210, 450, 471, 71));
        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(40, 20, 112, 34));
        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 20, 112, 34));

        retranslateUi(DeleteMessage);

        QMetaObject::connectSlotsByName(DeleteMessage);
    } // setupUi

    void retranslateUi(QWidget *DeleteMessage)
    {
        DeleteMessage->setWindowTitle(QApplication::translate("DeleteMessage", "DeleteMessage", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteMessage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\225\231\350\250\200\347\274\226\345\217\267</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeleteMessage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\225\231\350\250\200</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteMessage", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButton_10->setText(QApplication::translate("DeleteMessage", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("DeleteMessage", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteMessage: public Ui_DeleteMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMESSAGE_H
