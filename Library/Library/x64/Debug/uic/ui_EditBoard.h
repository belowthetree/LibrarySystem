/********************************************************************************
** Form generated from reading UI file 'EditBoard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOARD_H
#define UI_EDITBOARD_H

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

class Ui_Editboard
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Editboard)
    {
        if (Editboard->objectName().isEmpty())
            Editboard->setObjectName(QStringLiteral("Editboard"));
        Editboard->resize(1003, 722);
        label_2 = new QLabel(Editboard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 70, 101, 41));
        label_3 = new QLabel(Editboard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 180, 101, 41));
        textEdit_2 = new QTextEdit(Editboard);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(300, 80, 361, 31));
        textEdit_3 = new QTextEdit(Editboard);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(300, 180, 441, 311));
        groupBox = new QGroupBox(Editboard);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(280, 560, 481, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 112, 34));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 20, 112, 34));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 20, 112, 34));

        retranslateUi(Editboard);

        QMetaObject::connectSlotsByName(Editboard);
    } // setupUi

    void retranslateUi(QWidget *Editboard)
    {
        Editboard->setWindowTitle(QApplication::translate("Editboard", "EditBoard", Q_NULLPTR));
        label_2->setText(QApplication::translate("Editboard", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\205\254\345\221\212\346\240\207\351\242\230</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Editboard", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\205\254\345\221\212\345\206\205\345\256\271</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("Editboard", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Editboard", "\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Editboard", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Editboard: public Ui_Editboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOARD_H
