/********************************************************************************
** Form generated from reading UI file 'Admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QTabWidget *tabWidget_5;
    QWidget *tab_12;
    QTreeWidget *treeWidget_11;
    QWidget *tab_13;
    QTreeWidget *treeWidget_12;
    QWidget *tab_7;
    QTreeWidget *treeWidget_13;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_8;
    QTabWidget *tabWidget_6;
    QWidget *tab_15;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *searchPushButton;
    QTreeWidget *treeWidget_4;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *searchPushButton_2;
    QTreeWidget *treeWidget_5;
    QPushButton *pushButton_3;
    QWidget *tab_14;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QTreeWidget *treeWidget_6;
    QTreeWidget *treeWidget_7;
    QPushButton *pushButton_8;
    QWidget *tab_2;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_11;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTreeWidget *treeWidget_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_5;
    QTreeWidget *treeWidget_2;
    QPushButton *pushButton_7;

    void setupUi(QWidget *AdminClass)
    {
        if (AdminClass->objectName().isEmpty())
            AdminClass->setObjectName(QStringLiteral("AdminClass"));
        AdminClass->resize(1222, 803);
        tabWidget = new QTabWidget(AdminClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(12, 9, 1201, 781));
        QFont font;
        font.setPointSize(9);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_3 = new QTabWidget(tab);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 20, 1161, 721));
        tabWidget_3->setTabPosition(QTabWidget::West);
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_5 = new QTabWidget(tab_6);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(30, 10, 1091, 671));
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        treeWidget_11 = new QTreeWidget(tab_12);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_11->setHeaderItem(__qtreewidgetitem);
        treeWidget_11->setObjectName(QStringLiteral("treeWidget_11"));
        treeWidget_11->setGeometry(QRect(10, 10, 1071, 431));
        treeWidget_11->header()->setDefaultSectionSize(150);
        tabWidget_5->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        treeWidget_12 = new QTreeWidget(tab_13);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(1, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_12->setHeaderItem(__qtreewidgetitem1);
        treeWidget_12->setObjectName(QStringLiteral("treeWidget_12"));
        treeWidget_12->setGeometry(QRect(10, 10, 1071, 431));
        treeWidget_12->header()->setDefaultSectionSize(130);
        tabWidget_5->addTab(tab_13, QString());
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        treeWidget_13 = new QTreeWidget(tab_7);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_13->setHeaderItem(__qtreewidgetitem2);
        treeWidget_13->setObjectName(QStringLiteral("treeWidget_13"));
        treeWidget_13->setGeometry(QRect(30, 20, 1081, 451));
        treeWidget_13->header()->setDefaultSectionSize(120);
        groupBox = new QGroupBox(tab_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(330, 560, 441, 91));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 112, 34));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 30, 112, 34));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tabWidget_6 = new QTabWidget(tab_8);
        tabWidget_6->setObjectName(QStringLiteral("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(20, 20, 1091, 671));
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        label = new QLabel(tab_15);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 91, 31));
        textEdit = new QTextEdit(tab_15);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(260, 50, 321, 31));
        searchPushButton = new QPushButton(tab_15);
        searchPushButton->setObjectName(QStringLiteral("searchPushButton"));
        searchPushButton->setGeometry(QRect(620, 50, 112, 34));
        treeWidget_4 = new QTreeWidget(tab_15);
        treeWidget_4->setObjectName(QStringLiteral("treeWidget_4"));
        treeWidget_4->setGeometry(QRect(90, 130, 961, 121));
        treeWidget_4->header()->setDefaultSectionSize(185);
        label_2 = new QLabel(tab_15);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 310, 131, 31));
        textEdit_2 = new QTextEdit(tab_15);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(260, 310, 321, 31));
        searchPushButton_2 = new QPushButton(tab_15);
        searchPushButton_2->setObjectName(QStringLiteral("searchPushButton_2"));
        searchPushButton_2->setGeometry(QRect(620, 310, 112, 34));
        treeWidget_5 = new QTreeWidget(tab_15);
        treeWidget_5->setObjectName(QStringLiteral("treeWidget_5"));
        treeWidget_5->setGeometry(QRect(90, 390, 961, 141));
        pushButton_3 = new QPushButton(tab_15);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 570, 112, 34));
        tabWidget_6->addTab(tab_15, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        label_3 = new QLabel(tab_14);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 60, 91, 31));
        textEdit_3 = new QTextEdit(tab_14);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(250, 60, 321, 31));
        label_4 = new QLabel(tab_14);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 300, 121, 31));
        pushButton_4 = new QPushButton(tab_14);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(680, 60, 112, 34));
        treeWidget_6 = new QTreeWidget(tab_14);
        treeWidget_6->setObjectName(QStringLiteral("treeWidget_6"));
        treeWidget_6->setGeometry(QRect(70, 140, 971, 111));
        treeWidget_6->header()->setDefaultSectionSize(150);
        treeWidget_7 = new QTreeWidget(tab_14);
        treeWidget_7->setObjectName(QStringLiteral("treeWidget_7"));
        treeWidget_7->setGeometry(QRect(70, 380, 961, 141));
        pushButton_8 = new QPushButton(tab_14);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(460, 560, 112, 34));
        tabWidget_6->addTab(tab_14, QString());
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        treeWidget = new QTreeWidget(tab_2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 40, 1181, 541));
        treeWidget->header()->setDefaultSectionSize(130);
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(510, 660, 112, 34));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 30, 1141, 681));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        treeWidget_3 = new QTreeWidget(tab_4);
        treeWidget_3->setObjectName(QStringLiteral("treeWidget_3"));
        treeWidget_3->setGeometry(QRect(60, 30, 981, 481));
        treeWidget_3->header()->setDefaultSectionSize(230);
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 570, 311, 61));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 10, 112, 34));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 10, 112, 34));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        treeWidget_2 = new QTreeWidget(tab_5);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(40, 30, 1041, 521));
        treeWidget_2->header()->setDefaultSectionSize(200);
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(500, 570, 112, 34));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab_3, QString());

        retranslateUi(AdminClass);

        tabWidget->setCurrentIndex(2);
        tabWidget_3->setCurrentIndex(2);
        tabWidget_5->setCurrentIndex(1);
        tabWidget_6->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminClass);
    } // setupUi

    void retranslateUi(QWidget *AdminClass)
    {
        AdminClass->setWindowTitle(QApplication::translate("AdminClass", "Admin", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_11->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("AdminClass", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(5, QApplication::translate("AdminClass", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("AdminClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("AdminClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("AdminClass", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("AdminClass", "\345\200\237\351\230\205\347\224\250\346\210\267", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_12), QApplication::translate("AdminClass", "\345\200\237\351\230\205\346\265\201\346\260\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_12->headerItem();
        ___qtreewidgetitem1->setText(7, QApplication::translate("AdminClass", "\350\266\205\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem1->setText(6, QApplication::translate("AdminClass", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem1->setText(5, QApplication::translate("AdminClass", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("AdminClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("AdminClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("AdminClass", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("AdminClass", "\345\200\237\351\230\205\347\224\250\346\210\267", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("AdminClass", "\350\266\205\346\234\237\345\233\276\344\271\246", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("AdminClass", "\345\233\276\344\271\246\345\200\237\351\230\205\346\227\245\345\277\227", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_13->headerItem();
        ___qtreewidgetitem2->setText(8, QApplication::translate("AdminClass", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem2->setText(7, QApplication::translate("AdminClass", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem2->setText(6, QApplication::translate("AdminClass", "\345\275\223\345\211\215\345\200\237\351\230\205\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem2->setText(5, QApplication::translate("AdminClass", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem2->setText(4, QApplication::translate("AdminClass", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem2->setText(3, QApplication::translate("AdminClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem2->setText(2, QApplication::translate("AdminClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem2->setText(1, QApplication::translate("AdminClass", "\344\271\246\345\220\215", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("AdminClass", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminClass", "\345\210\240\351\231\244", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("AdminClass", "\345\233\276\344\271\246\345\242\236\346\267\273", Q_NULLPTR));
        label->setText(QApplication::translate("AdminClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\233\276\344\271\246\347\274\226\345\217\267</span></p></body></html>", Q_NULLPTR));
        searchPushButton->setText(QApplication::translate("AdminClass", "\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_4->headerItem();
        ___qtreewidgetitem3->setText(4, QApplication::translate("AdminClass", "\346\230\257\345\220\246\345\217\257\345\200\237", Q_NULLPTR));
        ___qtreewidgetitem3->setText(3, QApplication::translate("AdminClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem3->setText(2, QApplication::translate("AdminClass", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem3->setText(1, QApplication::translate("AdminClass", "ISBN", Q_NULLPTR));
        ___qtreewidgetitem3->setText(0, QApplication::translate("AdminClass", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\224\250\346\210\267\345\220\215(\345\255\246\345\217\267)</span></p></body></html>", Q_NULLPTR));
        searchPushButton_2->setText(QApplication::translate("AdminClass", "\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_5->headerItem();
        ___qtreewidgetitem4->setText(2, QApplication::translate("AdminClass", "\344\270\223\344\270\232", Q_NULLPTR));
        ___qtreewidgetitem4->setText(1, QApplication::translate("AdminClass", "\345\255\246\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem4->setText(0, QApplication::translate("AdminClass", "\345\247\223\345\220\215", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminClass", "\345\200\237\351\230\205", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_15), QApplication::translate("AdminClass", "\345\200\237\351\230\205", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\271\246\345\220\215</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("AdminClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\200\237\351\230\205\344\272\272\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdminClass", "\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_6->headerItem();
        ___qtreewidgetitem5->setText(5, QApplication::translate("AdminClass", "\346\230\257\345\220\246\350\266\205\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem5->setText(4, QApplication::translate("AdminClass", "\346\230\257\345\220\246\345\217\257\345\200\237", Q_NULLPTR));
        ___qtreewidgetitem5->setText(3, QApplication::translate("AdminClass", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem5->setText(2, QApplication::translate("AdminClass", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem5->setText(1, QApplication::translate("AdminClass", "ISBN", Q_NULLPTR));
        ___qtreewidgetitem5->setText(0, QApplication::translate("AdminClass", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget_7->headerItem();
        ___qtreewidgetitem6->setText(2, QApplication::translate("AdminClass", "\344\270\223\344\270\232", Q_NULLPTR));
        ___qtreewidgetitem6->setText(1, QApplication::translate("AdminClass", "\345\255\246\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem6->setText(0, QApplication::translate("AdminClass", "\345\247\223\345\220\215", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AdminClass", "\345\275\222\350\277\230", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_14), QApplication::translate("AdminClass", "\345\275\222\350\277\230", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("AdminClass", "\344\271\246\347\261\215\345\200\237\351\230\205", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminClass", "\345\233\276\344\271\246\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->headerItem();
        ___qtreewidgetitem7->setText(8, QApplication::translate("AdminClass", "\345\257\206\347\240\201", Q_NULLPTR));
        ___qtreewidgetitem7->setText(7, QApplication::translate("AdminClass", "\345\271\264\351\276\204", Q_NULLPTR));
        ___qtreewidgetitem7->setText(6, QApplication::translate("AdminClass", "\346\200\247\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem7->setText(5, QApplication::translate("AdminClass", "\351\202\256\347\256\261", Q_NULLPTR));
        ___qtreewidgetitem7->setText(4, QApplication::translate("AdminClass", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem7->setText(3, QApplication::translate("AdminClass", "\345\271\264\347\272\247\347\217\255\347\272\247", Q_NULLPTR));
        ___qtreewidgetitem7->setText(2, QApplication::translate("AdminClass", "\344\270\223\344\270\232", Q_NULLPTR));
        ___qtreewidgetitem7->setText(1, QApplication::translate("AdminClass", "\345\247\223\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem7->setText(0, QApplication::translate("AdminClass", "\345\255\246\345\217\267", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("AdminClass", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminClass", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_3->headerItem();
        ___qtreewidgetitem8->setText(3, QApplication::translate("AdminClass", "\345\217\221\345\270\203\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem8->setText(2, QApplication::translate("AdminClass", "\345\206\205\345\256\271", Q_NULLPTR));
        ___qtreewidgetitem8->setText(1, QApplication::translate("AdminClass", "\346\240\207\351\242\230", Q_NULLPTR));
        ___qtreewidgetitem8->setText(0, QApplication::translate("AdminClass", "\347\274\226\345\217\267", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_5->setText(QApplication::translate("AdminClass", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AdminClass", "\344\277\256\346\224\271", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("AdminClass", "\345\205\254\345\221\212\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget_2->headerItem();
        ___qtreewidgetitem9->setText(4, QApplication::translate("AdminClass", "\347\225\231\350\250\200\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem9->setText(3, QApplication::translate("AdminClass", "\347\225\231\350\250\200", Q_NULLPTR));
        ___qtreewidgetitem9->setText(2, QApplication::translate("AdminClass", "\345\255\246\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem9->setText(1, QApplication::translate("AdminClass", "\345\247\223\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem9->setText(0, QApplication::translate("AdminClass", "\347\225\231\350\250\200\347\274\226\345\217\267", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AdminClass", "\345\210\240\351\231\244", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("AdminClass", "\347\225\231\350\250\200\346\235\277\347\256\241\347\220\206", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminClass", "\344\272\244\346\265\201\345\271\263\345\217\260\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminClass: public Ui_AdminClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
