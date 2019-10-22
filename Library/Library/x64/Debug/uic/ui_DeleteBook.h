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

class Ui_Form
{
public:
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTreeWidget *treeWidget_13;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1055, 511);
        comboBox = new QComboBox(Form);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(210, 70, 111, 31));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(340, 70, 261, 31));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 70, 112, 34));
        treeWidget_13 = new QTreeWidget(Form);
        treeWidget_13->setObjectName(QStringLiteral("treeWidget_13"));
        treeWidget_13->setGeometry(QRect(70, 170, 881, 161));
        treeWidget_13->header()->setDefaultSectionSize(150);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(320, 390, 441, 91));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 30, 112, 34));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 30, 112, 34));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "DeleteBook", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("Form", "ISBN", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("Form", "\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_13->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("Form", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("Form", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("Form", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("Form", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("Form", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "\345\233\276\344\271\246\347\274\226\345\217\267/ISBN", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("Form", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_H
