/********************************************************************************
** Form generated from reading UI file 'AddBook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

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

class Ui_AddBook
{
public:
    QTextEdit *textEdit_9;
    QLabel *label_8;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_5;
    QLabel *label_7;
    QLabel *label_3;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_6;
    QLabel *label_2;
    QLabel *label_9;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox;
    QPushButton *comfirmPushButton;
    QPushButton *cancelPushButton;
    QLabel *label_4;
    QTextEdit *textEdit_10;
    QLabel *label_10;

    void setupUi(QWidget *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QStringLiteral("AddBook"));
        AddBook->resize(865, 728);
        textEdit_9 = new QTextEdit(AddBook);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(200, 630, 391, 41));
        label_8 = new QLabel(AddBook);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 640, 101, 21));
        QFont font;
        font.setPointSize(11);
        label_8->setFont(font);
        textEdit_2 = new QTextEdit(AddBook);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(200, 110, 391, 41));
        textEdit_5 = new QTextEdit(AddBook);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(200, 320, 391, 41));
        label_7 = new QLabel(AddBook);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 560, 141, 21));
        label_7->setFont(font);
        label_3 = new QLabel(AddBook);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 250, 101, 21));
        label_3->setFont(font);
        textEdit_7 = new QTextEdit(AddBook);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(200, 480, 391, 41));
        textEdit_4 = new QTextEdit(AddBook);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(200, 250, 391, 41));
        textEdit_8 = new QTextEdit(AddBook);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(200, 550, 391, 41));
        textEdit_6 = new QTextEdit(AddBook);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(200, 400, 391, 41));
        label_2 = new QLabel(AddBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 190, 101, 21));
        label_2->setFont(font);
        label_9 = new QLabel(AddBook);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 120, 101, 21));
        label_9->setFont(font);
        textEdit_3 = new QTextEdit(AddBook);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(200, 180, 391, 41));
        label_5 = new QLabel(AddBook);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 410, 101, 21));
        label_5->setFont(font);
        label_6 = new QLabel(AddBook);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 490, 101, 21));
        label_6->setFont(font);
        groupBox = new QGroupBox(AddBook);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(670, 290, 141, 201));
        comfirmPushButton = new QPushButton(groupBox);
        comfirmPushButton->setObjectName(QStringLiteral("comfirmPushButton"));
        comfirmPushButton->setGeometry(QRect(10, 10, 112, 34));
        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(10, 160, 112, 34));
        label_4 = new QLabel(AddBook);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 330, 101, 21));
        label_4->setFont(font);
        textEdit_10 = new QTextEdit(AddBook);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(200, 40, 391, 41));
        label_10 = new QLabel(AddBook);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 50, 101, 21));
        label_10->setFont(font);

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QWidget *AddBook)
    {
        AddBook->setWindowTitle(QApplication::translate("AddBook", "AddBook", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddBook", "\344\271\246\344\273\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddBook", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddBook", "\344\275\234\350\200\205", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddBook", "\344\271\246\345\220\215", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddBook", "ISBN", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddBook", "\345\207\272\347\211\210\346\227\266\351\227\264", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddBook", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        groupBox->setTitle(QString());
        comfirmPushButton->setText(QApplication::translate("AddBook", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AddBook", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddBook", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddBook", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
