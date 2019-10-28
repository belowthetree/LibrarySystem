/********************************************************************************
** Form generated from reading UI file 'BookInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookInfo
{
public:
    QTextBrowser *textBrowser_7;
    QLabel *label_6;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_5;
    QLabel *label_10;
    QLabel *label_8;
    QTextBrowser *textBrowser_9;
    QLabel *label_5;
    QTextBrowser *textBrowser_8;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser_3;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;

    void setupUi(QWidget *BookInfo)
    {
        if (BookInfo->objectName().isEmpty())
            BookInfo->setObjectName(QStringLiteral("BookInfo"));
        BookInfo->resize(760, 790);
        textBrowser_7 = new QTextBrowser(BookInfo);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(190, 470, 391, 41));
        label_6 = new QLabel(BookInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 480, 101, 21));
        QFont font;
        font.setPointSize(11);
        label_6->setFont(font);
        textBrowser_6 = new QTextBrowser(BookInfo);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(190, 390, 391, 41));
        textBrowser_5 = new QTextBrowser(BookInfo);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(190, 310, 391, 41));
        label_10 = new QLabel(BookInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 40, 101, 21));
        label_10->setFont(font);
        label_8 = new QLabel(BookInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 630, 101, 21));
        label_8->setFont(font);
        textBrowser_9 = new QTextBrowser(BookInfo);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(190, 620, 391, 41));
        label_5 = new QLabel(BookInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 400, 101, 21));
        label_5->setFont(font);
        textBrowser_8 = new QTextBrowser(BookInfo);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(190, 540, 391, 41));
        pushButton = new QPushButton(BookInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 700, 112, 34));
        textBrowser_10 = new QTextBrowser(BookInfo);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(190, 30, 391, 41));
        textBrowser_3 = new QTextBrowser(BookInfo);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(190, 170, 391, 41));
        label_9 = new QLabel(BookInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 110, 101, 21));
        label_9->setFont(font);
        label_7 = new QLabel(BookInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 550, 141, 21));
        label_7->setFont(font);
        label_4 = new QLabel(BookInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 320, 101, 21));
        label_4->setFont(font);
        textBrowser_4 = new QTextBrowser(BookInfo);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(190, 240, 391, 41));
        label_3 = new QLabel(BookInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 240, 101, 21));
        label_3->setFont(font);
        textBrowser_2 = new QTextBrowser(BookInfo);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(190, 100, 391, 41));
        label_2 = new QLabel(BookInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 180, 101, 21));
        label_2->setFont(font);

        retranslateUi(BookInfo);

        QMetaObject::connectSlotsByName(BookInfo);
    } // setupUi

    void retranslateUi(QWidget *BookInfo)
    {
        BookInfo->setWindowTitle(QApplication::translate("BookInfo", "BookInfo", Q_NULLPTR));
        label_6->setText(QApplication::translate("BookInfo", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        label_10->setText(QApplication::translate("BookInfo", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("BookInfo", "\344\271\246\344\273\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("BookInfo", "\345\207\272\347\211\210\346\227\266\351\227\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BookInfo", "\351\200\200\345\207\272", Q_NULLPTR));
        label_9->setText(QApplication::translate("BookInfo", "ISBN", Q_NULLPTR));
        label_7->setText(QApplication::translate("BookInfo", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("BookInfo", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("BookInfo", "\344\275\234\350\200\205", Q_NULLPTR));
        label_2->setText(QApplication::translate("BookInfo", "\344\271\246\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookInfo: public Ui_BookInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
