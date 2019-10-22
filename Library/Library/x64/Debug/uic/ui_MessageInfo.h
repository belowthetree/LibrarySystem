/********************************************************************************
** Form generated from reading UI file 'MessageInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEINFO_H
#define UI_MESSAGEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageInfo
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MessageInfo)
    {
        if (MessageInfo->objectName().isEmpty())
            MessageInfo->setObjectName(QStringLiteral("MessageInfo"));
        MessageInfo->resize(946, 676);
        label = new QLabel(MessageInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 70, 131, 41));
        label_3 = new QLabel(MessageInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(570, 150, 241, 21));
        label_4 = new QLabel(MessageInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 150, 241, 21));
        textBrowser = new QTextBrowser(MessageInfo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(200, 200, 581, 321));
        groupBox = new QGroupBox(MessageInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(330, 570, 281, 71));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 20, 112, 34));

        retranslateUi(MessageInfo);

        QMetaObject::connectSlotsByName(MessageInfo);
    } // setupUi

    void retranslateUi(QWidget *MessageInfo)
    {
        MessageInfo->setWindowTitle(QApplication::translate("MessageInfo", "MessageInfo", Q_NULLPTR));
        label->setText(QApplication::translate("MessageInfo", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#00aaff;\">\347\225\231\350\250\200\350\257\246\346\203\205</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MessageInfo", "\357\274\210\346\255\244\346\216\247\344\273\266\346\230\276\347\244\272\347\225\231\350\250\200\345\217\221\345\270\203\346\227\266\351\227\264\357\274\211", Q_NULLPTR));
        label_4->setText(QApplication::translate("MessageInfo", "\357\274\210\346\255\244\346\216\247\344\273\266\346\230\276\347\244\272\347\225\231\350\250\200\347\224\250\346\210\267\345\247\223\345\220\215\357\274\211", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("MessageInfo", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageInfo: public Ui_MessageInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEINFO_H
