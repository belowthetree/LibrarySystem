/********************************************************************************
** Form generated from reading UI file 'Library.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_11;
    QLabel *label_20;
    QLabel *label_21;
    QTreeWidget *treeWidget_5;
    QLabel *label_23;
    QWidget *tab_12;
    QTreeWidget *treeWidget_13;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QComboBox *comboBox_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_12;
    QWidget *tab_13;
    QTreeWidget *treeWidget_6;
    QWidget *tab_14;
    QLabel *label_24;
    QLabel *label_25;
    QTreeWidget *treeWidget_14;
    QWidget *tab_15;
    QLabel *label_26;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QTreeWidget *treeWidget_7;
    QWidget *tab_16;
    QTabWidget *tabWidget_3;
    QWidget *tab_17;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_27;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_13;
    QTextBrowser *textBrowser_14;
    QTextBrowser *textBrowser_15;
    QPushButton *changeInformationPushButton_2;
    QTextBrowser *textBrowser_16;
    QLabel *label_28;
    QTextBrowser *textBrowser_17;
    QLabel *label_29;
    QTextBrowser *textBrowser_18;
    QLabel *label_30;
    QTextBrowser *textBrowser_19;
    QWidget *tab_18;
    QTreeWidget *treeWidget_15;
    QWidget *tab_19;
    QTreeWidget *treeWidget_16;
    QWidget *tab_20;
    QTreeWidget *treeWidget_8;
    QGroupBox *groupBox_6;
    QPushButton *addFeedBackPushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LibraryClass)
    {
        if (LibraryClass->objectName().isEmpty())
            LibraryClass->setObjectName(QStringLiteral("LibraryClass"));
        LibraryClass->resize(1242, 845);
        centralWidget = new QWidget(LibraryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1211, 771));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(true);
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_20 = new QLabel(tab_11);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(220, -10, 591, 121));
        label_21 = new QLabel(tab_11);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(90, 70, 751, 621));
        label_21->setMouseTracking(true);
        label_21->setTabletTracking(false);
        label_21->setAutoFillBackground(false);
        label_21->setLineWidth(10);
        label_21->setWordWrap(true);
        treeWidget_5 = new QTreeWidget(tab_11);
        treeWidget_5->setObjectName(QStringLiteral("treeWidget_5"));
        treeWidget_5->setGeometry(QRect(900, 120, 301, 241));
        treeWidget_5->header()->setDefaultSectionSize(100);
        label_23 = new QLabel(tab_11);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(1010, 60, 101, 41));
        tabWidget->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        treeWidget_13 = new QTreeWidget(tab_12);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_13->setHeaderItem(__qtreewidgetitem);
        treeWidget_13->setObjectName(QStringLiteral("treeWidget_13"));
        treeWidget_13->setGeometry(QRect(10, 280, 1191, 351));
        treeWidget_13->header()->setDefaultSectionSize(115);
        groupBox_5 = new QGroupBox(tab_12);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(190, 650, 831, 71));
        pushButton_8 = new QPushButton(groupBox_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 20, 112, 34));
        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 20, 112, 34));
        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(470, 20, 112, 34));
        pushButton_11 = new QPushButton(groupBox_5);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(690, 20, 112, 34));
        comboBox_2 = new QComboBox(tab_12);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(280, 140, 111, 31));
        textEdit_2 = new QTextEdit(tab_12);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(440, 140, 311, 41));
        pushButton_12 = new QPushButton(tab_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(830, 140, 112, 34));
        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        treeWidget_6 = new QTreeWidget(tab_13);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget_6);
        new QTreeWidgetItem(__qtreewidgetitem7);
        treeWidget_6->setObjectName(QStringLiteral("treeWidget_6"));
        treeWidget_6->setGeometry(QRect(40, 50, 211, 541));
        tabWidget->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        label_24 = new QLabel(tab_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(500, 40, 311, 41));
        label_25 = new QLabel(tab_14);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(420, 660, 371, 41));
        treeWidget_14 = new QTreeWidget(tab_14);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem();
        __qtreewidgetitem8->setText(0, QStringLiteral("ISBN"));
        treeWidget_14->setHeaderItem(__qtreewidgetitem8);
        treeWidget_14->setObjectName(QStringLiteral("treeWidget_14"));
        treeWidget_14->setGeometry(QRect(10, 90, 1191, 521));
        treeWidget_14->header()->setDefaultSectionSize(130);
        tabWidget->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        label_26 = new QLabel(tab_15);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(350, 50, 801, 101));
        pushButton_13 = new QPushButton(tab_15);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(480, 640, 112, 34));
        pushButton_14 = new QPushButton(tab_15);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(650, 640, 112, 34));
        treeWidget_7 = new QTreeWidget(tab_15);
        treeWidget_7->setObjectName(QStringLiteral("treeWidget_7"));
        treeWidget_7->setGeometry(QRect(80, 140, 1061, 411));
        treeWidget_7->header()->setDefaultSectionSize(260);
        tabWidget->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        tabWidget_3 = new QTabWidget(tab_16);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setEnabled(true);
        tabWidget_3->setGeometry(QRect(40, 40, 1161, 661));
        tabWidget_3->setTabPosition(QTabWidget::West);
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        groupBox_2 = new QGroupBox(tab_17);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 20, 991, 611));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 20, 101, 31));
        QFont font;
        font.setPointSize(11);
        label_10->setFont(font);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(150, 80, 101, 31));
        label_11->setFont(font);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 150, 101, 31));
        label_12->setFont(font);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(150, 220, 101, 31));
        label_13->setFont(font);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(150, 290, 101, 31));
        label_14->setFont(font);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(150, 360, 101, 31));
        label_27->setFont(font);
        textBrowser_8 = new QTextBrowser(groupBox_2);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(270, 20, 301, 31));
        textBrowser_9 = new QTextBrowser(groupBox_2);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(270, 80, 301, 31));
        textBrowser_13 = new QTextBrowser(groupBox_2);
        textBrowser_13->setObjectName(QStringLiteral("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(270, 150, 301, 31));
        textBrowser_14 = new QTextBrowser(groupBox_2);
        textBrowser_14->setObjectName(QStringLiteral("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(270, 220, 301, 31));
        textBrowser_15 = new QTextBrowser(groupBox_2);
        textBrowser_15->setObjectName(QStringLiteral("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(270, 290, 301, 31));
        changeInformationPushButton_2 = new QPushButton(groupBox_2);
        changeInformationPushButton_2->setObjectName(QStringLiteral("changeInformationPushButton_2"));
        changeInformationPushButton_2->setGeometry(QRect(730, 280, 112, 34));
        textBrowser_16 = new QTextBrowser(groupBox_2);
        textBrowser_16->setObjectName(QStringLiteral("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(270, 360, 301, 31));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(150, 430, 101, 31));
        label_28->setFont(font);
        textBrowser_17 = new QTextBrowser(groupBox_2);
        textBrowser_17->setObjectName(QStringLiteral("textBrowser_17"));
        textBrowser_17->setGeometry(QRect(270, 430, 301, 31));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(150, 500, 101, 31));
        label_29->setFont(font);
        textBrowser_18 = new QTextBrowser(groupBox_2);
        textBrowser_18->setObjectName(QStringLiteral("textBrowser_18"));
        textBrowser_18->setGeometry(QRect(270, 500, 301, 31));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(150, 570, 101, 31));
        label_30->setFont(font);
        textBrowser_19 = new QTextBrowser(groupBox_2);
        textBrowser_19->setObjectName(QStringLiteral("textBrowser_19"));
        textBrowser_19->setGeometry(QRect(270, 570, 301, 31));
        tabWidget_3->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QStringLiteral("tab_18"));
        treeWidget_15 = new QTreeWidget(tab_18);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem();
        __qtreewidgetitem9->setText(0, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_15->setHeaderItem(__qtreewidgetitem9);
        treeWidget_15->setObjectName(QStringLiteral("treeWidget_15"));
        treeWidget_15->setGeometry(QRect(20, 50, 1071, 431));
        treeWidget_15->header()->setDefaultSectionSize(180);
        tabWidget_3->addTab(tab_18, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QStringLiteral("tab_19"));
        treeWidget_16 = new QTreeWidget(tab_19);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem();
        __qtreewidgetitem10->setText(0, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_16->setHeaderItem(__qtreewidgetitem10);
        treeWidget_16->setObjectName(QStringLiteral("treeWidget_16"));
        treeWidget_16->setGeometry(QRect(20, 50, 1071, 431));
        treeWidget_16->header()->setDefaultSectionSize(180);
        tabWidget_3->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        treeWidget_8 = new QTreeWidget(tab_20);
        treeWidget_8->setObjectName(QStringLiteral("treeWidget_8"));
        treeWidget_8->setGeometry(QRect(70, 40, 1001, 421));
        treeWidget_8->header()->setDefaultSectionSize(300);
        groupBox_6 = new QGroupBox(tab_20);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(340, 520, 411, 80));
        addFeedBackPushButton_2 = new QPushButton(groupBox_6);
        addFeedBackPushButton_2->setObjectName(QStringLiteral("addFeedBackPushButton_2"));
        addFeedBackPushButton_2->setGeometry(QRect(150, 20, 112, 34));
        tabWidget_3->addTab(tab_20, QString());
        tabWidget->addTab(tab_16, QString());
        LibraryClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LibraryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1242, 30));
        LibraryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LibraryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LibraryClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LibraryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LibraryClass->setStatusBar(statusBar);

        retranslateUi(LibraryClass);

        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(LibraryClass);
    } // setupUi

    void retranslateUi(QMainWindow *LibraryClass)
    {
        LibraryClass->setWindowTitle(QApplication::translate("LibraryClass", "Library", Q_NULLPTR));
        label_20->setText(QApplication::translate("LibraryClass", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#00aaff;\">\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\347\256\200\344\273\213</span></p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("LibraryClass", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\346\230\257\344\270\200\346\211\200\344\273\245\346\265\267\346\264\213\345\222\214\346\260\264\344\272\247\345\255\246\347\247\221\344\270\272\347\211\271\350\211\262\357\274\214\345\214\205\346\213\254\347\220\206\345\255\246\343\200\201\345\267\245\345\255\246\343\200\201\345\206\234\345\255\246\343\200\201\345\214\273\357\274\210\350\215\257\357\274\211\345\255\246\343\200\201\347\273\217\346\265\216\345\255\246\343\200\201\347\256\241\347\220\206\345\255\246\343\200\201\346\226\207\345\255\246\343\200\201\346\263\225\345\255\246\343\200\201\346\225\231\350\202\262\345\255\246\343\200\201\345\216\206\345\217\262\345\255\246\347\255\211\345\255\246\347\247\221\351\227\250\347\261\273\350\276\203\344\270\272\351\275\220\345\205\250\347\232\204\346\225\231\350\202\262\351\203\250\347\233\264\345\261\236\351\207\215\347\202\271\347\273\274\345\220\210\346\200\247\345\244\247\345\255\246"
                        "\357\274\214\346\230\257\345\233\275\345\256\266\342\200\234985\345\267\245\347\250\213\342\200\235\345\222\214\342\200\234211\345\267\245\347\250\213\342\200\235\351\207\215\347\202\271\345\273\272\350\256\276\351\253\230\346\240\241\344\271\213\344\270\200\357\274\2142017\345\271\2649\346\234\210\345\205\245\351\200\211\345\233\275\345\256\266\342\200\234\344\270\226\347\225\214\344\270\200\346\265\201\345\244\247\345\255\246\345\273\272\350\256\276\351\253\230\346\240\241\342\200\235\357\274\210A\347\261\273\357\274\211\343\200\202\345\234\250\345\217\221\345\261\225\345\216\206\345\217\262\344\270\212\357\274\214\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\344\270\216\345\261\261\344\270\234\345\244\247\345\255\246\345\275\242\346\210\220\344\272\206\350\277\22130\345\271\264\347\232\204\345\205\261\345\220\214\346\234\237\357\274\2101930\345\271\2649\346\234\210~1958\345\271\2649\346\234\210\357\274\211\357\274\214\350\277\231\344\271\237\345\206\263\345\256\232\344\272\206\344"
                        "\270\244\346\240\241\347\232\204\345\233\276\344\271\246\351\246\206\346\272\220\345\244\264\350\231\275\344\270\215\345\220\214\357\274\214\344\275\206\346\270\212\346\272\220\351\242\207\346\267\261\343\200\202\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\345\247\213\345\273\272\344\272\2161924\345\271\26410\346\234\210\357\274\214\351\246\226\344\273\273\351\246\206\351\225\277\346\230\257\346\210\221\345\233\275\350\221\227\345\220\215\346\225\243\346\226\207\345\255\246\345\256\266\343\200\201\347\277\273\350\257\221\345\256\266\346\242\201\345\256\236\347\247\213\345\205\210\347\224\237\343\200\202\350\207\2631936\345\271\264\345\272\225\357\274\214\351\246\206\350\227\217\344\271\246\347\261\215\345\267\262\350\276\2768.78\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\233\276\344\271\2466.50\344\270\207\345\206\214\357\274\214\345\244\226\346\226\207\345\233\276\344\271\2462.25\344\270\207\345\206\214"
                        "\357\274\233\344\270\255\345\244\226\346\226\207\346\234\237\345\210\2121028\347\247\215\357\274\214\350\256\2415.41\344\270\207\345\206\214\343\200\202\346\212\227\346\227\245\346\210\230\344\272\211\346\227\266\346\234\237\345\255\246\346\240\241\350\242\253\350\277\253\345\215\227\350\277\201\357\274\214\350\207\2631946\345\271\26410\346\234\210\345\261\261\344\270\234\345\244\247\345\255\246\345\234\250\351\235\222\345\262\233\345\244\215\346\240\241\346\227\266\357\274\214\345\216\237\346\234\211\347\232\204\346\226\207\347\214\256\345\217\252\345\211\251\344\270\255\346\226\207\344\271\246\345\210\2125166\345\206\214\343\200\201\345\244\226\346\226\207\344\271\246\345\210\2123398\345\206\214\357\274\214\346\265\201\345\244\261\344\271\235\346\210\220\344\273\245\344\270\212\343\200\2021949\345\271\2646\346\234\210\351\235\222\345\262\233\350\247\243\346\224\276\357\274\214\344\270\255\345\233\275\345\217\244\345\205\270\346\226\207\345\255\246\345\256\266\351\231\206\344\276\203\345\246\202\346\225\231\346"
                        "\216\210\344\273\273\345\233\276\344\271\246\351\246\206\351\246\206\351\225\277\343\200\2021951\345\271\264\345\215\216\344\270\234\345\244\247\345\255\246\344\270\216\345\233\275\347\253\213\345\261\261\344\270\234\345\244\247\345\255\246\345\220\210\345\271\266\346\210\220\347\253\213\344\272\206\346\226\260\347\232\204\345\261\261\344\270\234\345\244\247\345\255\246\357\274\214\344\271\246\345\210\212\345\220\210\350\256\241\351\200\27620\344\270\207\345\206\214\343\200\2021958\345\271\264\345\261\261\344\270\234\345\244\247\345\255\246\345\245\211\345\221\275\350\277\201\345\233\236\346\265\216\345\215\227\357\274\2141959\345\271\264\345\261\261\344\270\234\346\265\267\346\264\213\345\255\246\351\231\242\346\210\220\347\253\213\357\274\214\345\255\246\346\240\241\345\274\200\345\220\257\344\272\206\346\226\260\347\232\204\345\216\206\345\217\262\345\217\221\345\261\225\351\230\266\346\256\265\357\274\214\345\233\276\344\271\246\351\246\206\344\271\237\345\276\227\345\210\260\350\276\203\345\277\253\345\217"
                        "\221\345\261\225\343\200\202\346\226\207\351\235\251\345\215\201\345\271\264\357\274\214\345\255\246\346\240\241\344\272\213\344\270\232\351\201\255\345\217\227\351\207\215\345\244\247\346\215\237\345\244\261\357\274\214\345\233\276\344\271\246\351\246\206\344\272\246\344\270\215\344\276\213\345\244\226\343\200\202\346\224\271\351\235\251\345\274\200\346\224\276\344\273\245\345\220\216\357\274\214\345\233\276\344\271\246\351\246\206\346\226\207\347\214\256\345\273\272\350\256\276\351\232\217\347\235\200\345\220\204\351\241\271\344\272\213\344\270\232\347\232\204\346\201\242\345\244\215\345\217\221\345\261\225\351\200\220\346\270\220\350\265\260\344\270\212\346\255\243\350\247\204\343\200\2021985\345\271\264\351\261\274\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\351\246\206\350\227\217\345\233\276\344\271\246\346\234\21156.95\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\233\276\344"
                        "\271\24644.64\344\270\207\345\206\214\343\200\201\345\244\226\346\226\207\345\233\276\344\271\24612.31\344\270\207\345\206\214\357\274\233\351\246\206\350\227\217\346\234\237\345\210\212\345\220\210\350\256\242\346\234\2548.48\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\210\2123.14\344\270\207\345\206\214\343\200\201\345\244\226\346\226\207\345\210\2125.35\344\270\207\345\206\214\343\200\2021992\345\271\264\346\265\256\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\345\273\272\347\255\221\351\235\242\347\247\2578200\345\271\263\346\226\271\347\261\263\357\274\214\344\272\2162010\345\271\2643\346\234\210\346\222\244\345\271\266\343\200\2022007\345\271\264\345\264\202\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\346\226\260\351\246\206\345\273\272\347\255\221\351\235\242\347\247\2574.5\344\270\207\345"
                        "\271\263\346\226\271\347\261\263\357\274\214\351\230\205\350\247\210\350\207\252\344\277\256\345\272\247\344\275\215\350\277\2213000\344\270\252\357\274\233\345\212\237\350\203\275\345\270\203\345\261\200\347\247\221\345\255\246\357\274\214\350\256\276\345\244\207\351\205\215\347\275\256\345\205\210\350\277\233\357\274\214\350\207\252\345\212\250\345\214\226\347\250\213\345\272\246\350\276\203\351\253\230\357\274\214\344\270\27221\344\270\226\347\272\252\345\233\276\344\271\246\351\246\206\351\200\202\345\272\224\345\255\246\346\240\241\344\272\213\344\270\232\345\217\221\345\261\225\345\245\240\345\256\232\344\272\206\345\235\232\345\256\236\345\237\272\347\241\200\343\200\202\345\216\206\347\273\217\350\277\22190\345\271\264\347\232\204\345\217\221\345\261\225\357\274\214\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\345\267\262\347\273\217\346\210\220\344\270\272\351\246\206\350\210\215\344\274\230\350\211\257\343\200\201\350\265\204\346\272\220\344"
                        "\270\260\345\257\214\343\200\201\345\270\203\345\261\200\345\220\210\347\220\206\343\200\201\347\256\241\347\220\206\347\247\221\345\255\246\347\232\204\347\273\274\345\220\210\346\200\247\345\233\276\344\271\246\351\246\206\343\200\202\345\212\236\351\246\206\345\256\227\346\227\250\346\230\257\342\200\234\344\270\216\350\257\273\350\200\205\345\205\261\345\220\214\350\277\233\346\255\245\342\200\235\357\274\214\347\224\261\350\221\227\345\220\215\344\275\234\345\256\266\343\200\201\346\210\221\346\240\241\351\241\276\351\227\256\343\200\201\346\225\231\346\216\210\347\216\213\350\222\231\345\205\210\347\224\237\351\242\230\345\206\231\343\200\202 </span></p></body></html>", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_5->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("LibraryClass", "\345\205\254\345\221\212\346\240\207\351\242\230", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("LibraryClass", "\347\274\226\345\217\267", Q_NULLPTR));
        label_23->setText(QApplication::translate("LibraryClass", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#00aaff;\">\345\205\254\345\221\212\346\240\217</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("LibraryClass", "\351\246\226\351\241\265", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_13->headerItem();
        ___qtreewidgetitem1->setText(9, QApplication::translate("LibraryClass", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem1->setText(8, QApplication::translate("LibraryClass", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem1->setText(7, QApplication::translate("LibraryClass", "\345\275\223\345\211\215\345\200\237\351\230\205\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem1->setText(6, QApplication::translate("LibraryClass", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem1->setText(5, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("LibraryClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("LibraryClass", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("LibraryClass", "ISBN", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        pushButton_8->setText(QApplication::translate("LibraryClass", "\351\246\226\351\241\265", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("LibraryClass", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("LibraryClass", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("LibraryClass", "\345\260\276\351\241\265", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("LibraryClass", "\344\271\246\345\220\215", Q_NULLPTR)
         << QApplication::translate("LibraryClass", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("LibraryClass", "ISBN", Q_NULLPTR)
        );
        pushButton_12->setText(QApplication::translate("LibraryClass", "\346\237\245\350\257\242", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("LibraryClass", "\344\271\246\347\233\256\346\243\200\347\264\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_6->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("LibraryClass", "\344\271\246\347\261\215\345\210\206\347\261\273", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget_6->isSortingEnabled();
        treeWidget_6->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_6->topLevelItem(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("LibraryClass", "F ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("LibraryClass", "\346\263\225\345\276\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_6->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("LibraryClass", "G", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("LibraryClass", "\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget_6->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("LibraryClass", "H", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("LibraryClass", "\346\265\267\346\264\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget_6->topLevelItem(3);
        ___qtreewidgetitem9->setText(0, QApplication::translate("LibraryClass", "J ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("LibraryClass", "\347\273\217\346\265\216", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("LibraryClass", "\350\256\241\347\256\227\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QApplication::translate("LibraryClass", "\344\272\272\345\267\245\346\231\272\350\203\275", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QApplication::translate("LibraryClass", "\346\267\261\345\272\246\345\255\246\344\271\240", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget_6->topLevelItem(4);
        ___qtreewidgetitem14->setText(0, QApplication::translate("LibraryClass", "W", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(0, QApplication::translate("LibraryClass", "\347\211\251\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidget_6->topLevelItem(5);
        ___qtreewidgetitem16->setText(0, QApplication::translate("LibraryClass", "Z ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(0, QApplication::translate("LibraryClass", "\346\224\277\346\262\273", Q_NULLPTR));
        treeWidget_6->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("LibraryClass", "\345\210\206\347\261\273\346\265\217\350\247\210", Q_NULLPTR));
        label_24->setText(QApplication::translate("LibraryClass", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#aa55ff;\">\346\216\250\350\215\220\344\271\246\347\261\215\346\246\234\345\215\225</span></p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("LibraryClass", "\347\273\237\350\256\241\350\214\203\345\233\264\357\274\232\350\277\2212\344\270\252\346\234\210  \347\273\237\350\256\241\346\226\271\345\274\217\357\274\232\345\200\237\351\230\205\346\254\241\346\225\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = treeWidget_14->headerItem();
        ___qtreewidgetitem18->setText(8, QApplication::translate("LibraryClass", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem18->setText(7, QApplication::translate("LibraryClass", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem18->setText(6, QApplication::translate("LibraryClass", "\345\275\223\345\211\215\345\200\237\351\230\205\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem18->setText(5, QApplication::translate("LibraryClass", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem18->setText(4, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem18->setText(3, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem18->setText(2, QApplication::translate("LibraryClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem18->setText(1, QApplication::translate("LibraryClass", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_14), QApplication::translate("LibraryClass", "\347\203\255\351\227\250\346\216\250\350\215\220", Q_NULLPTR));
        label_26->setText(QApplication::translate("LibraryClass", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#55aaff;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\351\246\206\347\225\231\350\250\200\346\235\277\357\274\201</span></p></body></html>", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("LibraryClass", "\346\267\273\345\212\240\347\225\231\350\250\200", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("LibraryClass", "\346\210\221\347\232\204\347\225\231\350\250\200", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem19 = treeWidget_7->headerItem();
        ___qtreewidgetitem19->setText(3, QApplication::translate("LibraryClass", "\347\225\231\350\250\200\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem19->setText(2, QApplication::translate("LibraryClass", "\347\225\231\350\250\200", Q_NULLPTR));
        ___qtreewidgetitem19->setText(1, QApplication::translate("LibraryClass", "\345\255\246\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem19->setText(0, QApplication::translate("LibraryClass", "\345\247\223\345\220\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_15), QApplication::translate("LibraryClass", "\347\225\231\350\250\200\346\235\277", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_10->setText(QApplication::translate("LibraryClass", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("LibraryClass", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("LibraryClass", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("LibraryClass", "\345\271\264\347\272\247\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("LibraryClass", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_27->setText(QApplication::translate("LibraryClass", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        changeInformationPushButton_2->setText(QApplication::translate("LibraryClass", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        label_28->setText(QApplication::translate("LibraryClass", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        label_29->setText(QApplication::translate("LibraryClass", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_30->setText(QApplication::translate("LibraryClass", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_17), QApplication::translate("LibraryClass", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidget_15->headerItem();
        ___qtreewidgetitem20->setText(5, QApplication::translate("LibraryClass", "\345\275\222\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem20->setText(4, QApplication::translate("LibraryClass", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem20->setText(3, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem20->setText(2, QApplication::translate("LibraryClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem20->setText(1, QApplication::translate("LibraryClass", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_18), QApplication::translate("LibraryClass", "\345\200\237\351\230\205\345\216\206\345\217\262", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem21 = treeWidget_16->headerItem();
        ___qtreewidgetitem21->setText(5, QApplication::translate("LibraryClass", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem21->setText(4, QApplication::translate("LibraryClass", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem21->setText(3, QApplication::translate("LibraryClass", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem21->setText(2, QApplication::translate("LibraryClass", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem21->setText(1, QApplication::translate("LibraryClass", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_19), QApplication::translate("LibraryClass", "\345\275\223\345\211\215\345\200\237\351\230\205", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem22 = treeWidget_8->headerItem();
        ___qtreewidgetitem22->setText(2, QApplication::translate("LibraryClass", "\345\233\236\345\244\215", Q_NULLPTR));
        ___qtreewidgetitem22->setText(1, QApplication::translate("LibraryClass", "\345\217\215\351\246\210\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem22->setText(0, QApplication::translate("LibraryClass", "\345\217\215\351\246\210\345\206\205\345\256\271", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        addFeedBackPushButton_2->setText(QApplication::translate("LibraryClass", "\346\267\273\345\212\240\345\217\215\351\246\210", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_20), QApplication::translate("LibraryClass", "\346\210\221\347\232\204\346\266\210\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QApplication::translate("LibraryClass", "\346\210\221\347\232\204\345\233\276\344\271\246\351\246\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibraryClass: public Ui_LibraryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
