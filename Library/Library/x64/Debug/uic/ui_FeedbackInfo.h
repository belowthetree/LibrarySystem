/********************************************************************************
** Form generated from reading UI file 'FeedbackInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACKINFO_H
#define UI_FEEDBACKINFO_H

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

class Ui_FeedbackInfo
{
public:
    QLabel *label_4;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *FeedbackInfo)
    {
        if (FeedbackInfo->objectName().isEmpty())
            FeedbackInfo->setObjectName(QStringLiteral("FeedbackInfo"));
        FeedbackInfo->resize(977, 793);
        label_4 = new QLabel(FeedbackInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 430, 91, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(11);
        label_4->setFont(font);
        textBrowser_2 = new QTextBrowser(FeedbackInfo);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(250, 430, 521, 191));
        label = new QLabel(FeedbackInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 180, 91, 31));
        label->setFont(font);
        label_3 = new QLabel(FeedbackInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(620, 330, 181, 31));
        label_2 = new QLabel(FeedbackInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 40, 131, 41));
        groupBox = new QGroupBox(FeedbackInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(370, 660, 281, 71));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 20, 112, 34));
        textBrowser = new QTextBrowser(FeedbackInfo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(250, 120, 521, 191));

        retranslateUi(FeedbackInfo);

        QMetaObject::connectSlotsByName(FeedbackInfo);
    } // setupUi

    void retranslateUi(QWidget *FeedbackInfo)
    {
        FeedbackInfo->setWindowTitle(QApplication::translate("FeedbackInfo", "FeedbackInfo", Q_NULLPTR));
        label_4->setText(QApplication::translate("FeedbackInfo", "\345\256\242\346\234\215\345\233\236\345\244\215", Q_NULLPTR));
        label->setText(QApplication::translate("FeedbackInfo", "\345\217\215\351\246\210\345\206\205\345\256\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("FeedbackInfo", "\357\274\210\346\255\244\345\244\204\346\230\276\347\244\272\345\217\215\351\246\210\346\227\266\351\227\264\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("FeedbackInfo", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#00aaff;\">\345\217\215\351\246\210\350\257\246\346\203\205</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_3->setText(QApplication::translate("FeedbackInfo", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeedbackInfo: public Ui_FeedbackInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACKINFO_H
