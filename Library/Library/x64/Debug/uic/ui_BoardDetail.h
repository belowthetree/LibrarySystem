/********************************************************************************
** Form generated from reading UI file 'BoardDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDDETAIL_H
#define UI_BOARDDETAIL_H

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

class Ui_BoardDetail
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QWidget *BoardDetail)
    {
        if (BoardDetail->objectName().isEmpty())
            BoardDetail->setObjectName(QStringLiteral("BoardDetail"));
        BoardDetail->resize(959, 650);
        textBrowser = new QTextBrowser(BoardDetail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(140, 170, 641, 351));
        label = new QLabel(BoardDetail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 30, 131, 41));
        label_2 = new QLabel(BoardDetail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 100, 201, 31));
        groupBox = new QGroupBox(BoardDetail);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 550, 281, 71));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 20, 112, 34));
        label_3 = new QLabel(BoardDetail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 110, 241, 21));

        retranslateUi(BoardDetail);

        QMetaObject::connectSlotsByName(BoardDetail);
    } // setupUi

    void retranslateUi(QWidget *BoardDetail)
    {
        BoardDetail->setWindowTitle(QApplication::translate("BoardDetail", "BoardDetail", Q_NULLPTR));
        label->setText(QApplication::translate("BoardDetail", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#00aaff;\">\345\205\254\345\221\212\350\257\246\346\203\205</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("BoardDetail", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">\357\274\210\346\255\244\346\216\247\344\273\266\346\230\276\347\244\272\346\240\207\351\242\230\357\274\211</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("BoardDetail", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("BoardDetail", "\357\274\210\346\255\244\346\216\247\344\273\266\346\230\276\347\244\272\345\205\254\345\221\212\345\217\221\345\270\203\346\227\266\351\227\264\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BoardDetail: public Ui_BoardDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDDETAIL_H
