/********************************************************************************
** Form generated from reading UI file 'DeleteBook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOK_H
#define UI_DELETEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteBook
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QTreeWidget *treeWidget_13;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *DeleteBook)
    {
        if (DeleteBook->objectName().isEmpty())
            DeleteBook->setObjectName(QStringLiteral("DeleteBook"));
        DeleteBook->resize(985, 536);
        groupBox = new QGroupBox(DeleteBook);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(290, 390, 441, 91));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 30, 112, 34));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 30, 112, 34));
        comboBox = new QComboBox(DeleteBook);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 70, 111, 31));
        treeWidget_13 = new QTreeWidget(DeleteBook);
        treeWidget_13->setObjectName(QStringLiteral("treeWidget_13"));
        treeWidget_13->setGeometry(QRect(40, 170, 881, 161));
        treeWidget_13->header()->setDefaultSectionSize(150);
        pushButton = new QPushButton(DeleteBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 70, 112, 34));
        textEdit = new QTextEdit(DeleteBook);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(310, 70, 261, 31));

        retranslateUi(DeleteBook);

        QMetaObject::connectSlotsByName(DeleteBook);
    } // setupUi

    void retranslateUi(QWidget *DeleteBook)
    {
        DeleteBook->setWindowTitle(QApplication::translate("DeleteBook", "DeleteBook", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("DeleteBook", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("DeleteBook", "\345\217\226\346\266\210", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DeleteBook", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("DeleteBook", "ISBN", Q_NULLPTR)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_13->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("DeleteBook", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("DeleteBook", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("DeleteBook", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("DeleteBook", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("DeleteBook", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("DeleteBook", "\345\233\276\344\271\246\347\274\226\345\217\267/ISBN", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteBook", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteBook: public Ui_DeleteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_H
