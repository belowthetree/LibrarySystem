/********************************************************************************
** Form generated from reading UI file 'Board.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardDetail
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *BoardDetail)
    {
        if (BoardDetail->objectName().isEmpty())
            BoardDetail->setObjectName(QStringLiteral("BoardDetail"));
        BoardDetail->resize(1013, 646);
        BoardDetail->setContextMenuPolicy(Qt::NoContextMenu);
        groupBox = new QGroupBox(BoardDetail);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(380, 550, 281, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 112, 34));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 20, 112, 34));
        treeWidget = new QTreeWidget(BoardDetail);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 60, 981, 481));
        treeWidget->header()->setDefaultSectionSize(230);

        retranslateUi(BoardDetail);

        QMetaObject::connectSlotsByName(BoardDetail);
    } // setupUi

    void retranslateUi(QDialog *BoardDetail)
    {
        BoardDetail->setWindowTitle(QApplication::translate("BoardDetail", "BoardDetail", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("BoardDetail", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BoardDetail", "\345\217\226\346\266\210", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("BoardDetail", "\345\217\221\345\270\203\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("BoardDetail", "\345\206\205\345\256\271", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("BoardDetail", "\346\240\207\351\242\230", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("BoardDetail", "\347\274\226\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BoardDetail: public Ui_BoardDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
