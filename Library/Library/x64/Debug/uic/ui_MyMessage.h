/********************************************************************************
** Form generated from reading UI file 'MyMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGE_H
#define UI_MYMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMessage
{
public:
    QTreeWidget *treeWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *MyMessage)
    {
        if (MyMessage->objectName().isEmpty())
            MyMessage->setObjectName(QStringLiteral("MyMessage"));
        MyMessage->resize(1054, 660);
        treeWidget = new QTreeWidget(MyMessage);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(70, 80, 911, 311));
        treeWidget->header()->setDefaultSectionSize(300);
        pushButton = new QPushButton(MyMessage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 510, 112, 34));

        retranslateUi(MyMessage);

        QMetaObject::connectSlotsByName(MyMessage);
    } // setupUi

    void retranslateUi(QWidget *MyMessage)
    {
        MyMessage->setWindowTitle(QApplication::translate("MyMessage", "MyMessage", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MyMessage", "\347\225\231\350\250\200\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MyMessage", "\347\225\231\350\250\200", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MyMessage", "\347\225\231\350\250\200\347\274\226\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyMessage", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyMessage: public Ui_MyMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGE_H
