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

class Ui_Bookinfo
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser_6;
    QLabel *label_9;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_5;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_2;
    QTextBrowser *textBrowser_3;
    QLabel *label_3;
    QTextBrowser *textBrowser_7;
    QLabel *label_7;
    QTextBrowser *textBrowser_9;
    QLabel *label_5;
    QTextBrowser *textBrowser_4;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QLabel *label_10;
    QTextBrowser *textBrowser_10;

    void setupUi(QWidget *Bookinfo)
    {
        if (Bookinfo->objectName().isEmpty())
            Bookinfo->setObjectName(QStringLiteral("Bookinfo"));
        Bookinfo->resize(911, 757);
        pushButton = new QPushButton(Bookinfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 700, 112, 34));
        textBrowser_6 = new QTextBrowser(Bookinfo);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(300, 390, 391, 41));
        label_9 = new QLabel(Bookinfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 110, 101, 21));
        QFont font;
        font.setPointSize(11);
        label_9->setFont(font);
        textBrowser_8 = new QTextBrowser(Bookinfo);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(300, 540, 391, 41));
        textBrowser_5 = new QTextBrowser(Bookinfo);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(300, 310, 391, 41));
        label_8 = new QLabel(Bookinfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 630, 101, 21));
        label_8->setFont(font);
        label_4 = new QLabel(Bookinfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 320, 101, 21));
        label_4->setFont(font);
        label_2 = new QLabel(Bookinfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 180, 101, 21));
        label_2->setFont(font);
        textBrowser_3 = new QTextBrowser(Bookinfo);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(300, 170, 391, 41));
        label_3 = new QLabel(Bookinfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 240, 101, 21));
        label_3->setFont(font);
        textBrowser_7 = new QTextBrowser(Bookinfo);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(300, 470, 391, 41));
        label_7 = new QLabel(Bookinfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 550, 141, 21));
        label_7->setFont(font);
        textBrowser_9 = new QTextBrowser(Bookinfo);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(300, 620, 391, 41));
        label_5 = new QLabel(Bookinfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 400, 101, 21));
        label_5->setFont(font);
        textBrowser_4 = new QTextBrowser(Bookinfo);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(300, 240, 391, 41));
        label_6 = new QLabel(Bookinfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 480, 101, 21));
        label_6->setFont(font);
        textBrowser_2 = new QTextBrowser(Bookinfo);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(300, 100, 391, 41));
        label_10 = new QLabel(Bookinfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(170, 40, 101, 21));
        label_10->setFont(font);
        textBrowser_10 = new QTextBrowser(Bookinfo);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(300, 30, 391, 41));

        retranslateUi(Bookinfo);

        QMetaObject::connectSlotsByName(Bookinfo);
    } // setupUi

    void retranslateUi(QWidget *Bookinfo)
    {
        Bookinfo->setWindowTitle(QApplication::translate("Bookinfo", "Bookinfo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Bookinfo", "\351\200\200\345\207\272", Q_NULLPTR));
        label_9->setText(QApplication::translate("Bookinfo", "ISBN", Q_NULLPTR));
        label_8->setText(QApplication::translate("Bookinfo", "\344\271\246\344\273\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("Bookinfo", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("Bookinfo", "\344\271\246\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("Bookinfo", "\344\275\234\350\200\205", Q_NULLPTR));
        label_7->setText(QApplication::translate("Bookinfo", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("Bookinfo", "\345\207\272\347\211\210\346\227\266\351\227\264", Q_NULLPTR));
        label_6->setText(QApplication::translate("Bookinfo", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        label_10->setText(QApplication::translate("Bookinfo", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Bookinfo: public Ui_Bookinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
