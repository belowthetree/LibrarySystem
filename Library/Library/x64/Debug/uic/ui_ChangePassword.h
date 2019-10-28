/********************************************************************************
** Form generated from reading UI file 'ChangePassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(764, 577);
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 310, 81, 31));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 380, 101, 41));
        label_3->setFont(font);
        pushButton_3 = new QPushButton(ChangePassword);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 480, 112, 34));
        label = new QLabel(ChangePassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 61, 31));
        label->setFont(font);
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 50, 112, 34));
        treeWidget = new QTreeWidget(ChangePassword);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(60, 130, 651, 141));
        textEdit_3 = new QTextEdit(ChangePassword);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(190, 390, 311, 31));
        textEdit_2 = new QTextEdit(ChangePassword);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(190, 310, 311, 31));
        textEdit = new QTextEdit(ChangePassword);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 50, 311, 31));
        pushButton_2 = new QPushButton(ChangePassword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 480, 112, 34));

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "ChangePassword", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ChangePassword", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("ChangePassword", "\345\255\246\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangePassword", "\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("ChangePassword", "\345\257\206\347\240\201", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("ChangePassword", "\344\270\223\344\270\232", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("ChangePassword", "\345\247\223\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ChangePassword", "\345\255\246\345\217\267", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
