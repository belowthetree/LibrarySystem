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

class Ui_Library
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_16;
    QLabel *label_17;
    QTreeWidget *treeWidget_4;
    QLabel *label_22;
    QWidget *tab_2;
    QTreeWidget *treeWidget_12;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QPushButton *pushButton_7;
    QWidget *tab_3;
    QTreeWidget *treeWidget;
    QWidget *tab_4;
    QLabel *label_18;
    QLabel *label_19;
    QTreeWidget *treeWidget_9;
    QWidget *tab_5;
    QLabel *label_15;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTreeWidget *treeWidget_2;
    QWidget *tab_6;
    QTabWidget *tabWidget_2;
    QWidget *tab_7;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QPushButton *changeInformationPushButton;
    QTextBrowser *textBrowser_7;
    QLabel *label_7;
    QTextBrowser *textBrowser_10;
    QLabel *label_8;
    QTextBrowser *textBrowser_11;
    QLabel *label_9;
    QTextBrowser *textBrowser_12;
    QWidget *tab_8;
    QTreeWidget *treeWidget_10;
    QWidget *tab_9;
    QTreeWidget *treeWidget_11;
    QWidget *tab_10;
    QTreeWidget *treeWidget_3;
    QGroupBox *groupBox_3;
    QPushButton *addFeedBackPushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QStringLiteral("Library"));
        Library->resize(1223, 830);
        centralWidget = new QWidget(Library);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1211, 771));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(220, -10, 591, 121));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(90, 70, 751, 621));
        label_17->setMouseTracking(true);
        label_17->setTabletTracking(false);
        label_17->setAutoFillBackground(false);
        label_17->setLineWidth(10);
        label_17->setWordWrap(true);
        treeWidget_4 = new QTreeWidget(tab);
        treeWidget_4->setObjectName(QStringLiteral("treeWidget_4"));
        treeWidget_4->setGeometry(QRect(900, 120, 301, 241));
        treeWidget_4->header()->setDefaultSectionSize(100);
        label_22 = new QLabel(tab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(1010, 60, 101, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        treeWidget_12 = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_12->setHeaderItem(__qtreewidgetitem);
        treeWidget_12->setObjectName(QStringLiteral("treeWidget_12"));
        treeWidget_12->setGeometry(QRect(10, 280, 1191, 351));
        treeWidget_12->header()->setDefaultSectionSize(115);
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(190, 650, 831, 71));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 112, 34));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 20, 112, 34));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 20, 112, 34));
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(690, 20, 112, 34));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 140, 111, 31));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(440, 140, 311, 41));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(830, 140, 112, 34));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        treeWidget = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem7);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(40, 50, 211, 541));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(500, 40, 311, 41));
        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(420, 660, 371, 41));
        treeWidget_9 = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem();
        __qtreewidgetitem8->setText(0, QStringLiteral("ISBN"));
        treeWidget_9->setHeaderItem(__qtreewidgetitem8);
        treeWidget_9->setObjectName(QStringLiteral("treeWidget_9"));
        treeWidget_9->setGeometry(QRect(10, 90, 1191, 521));
        treeWidget_9->header()->setDefaultSectionSize(130);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(350, 50, 801, 101));
        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 640, 112, 34));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 640, 112, 34));
        treeWidget_2 = new QTreeWidget(tab_5);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(80, 140, 1061, 411));
        treeWidget_2->header()->setDefaultSectionSize(260);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_2 = new QTabWidget(tab_6);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setEnabled(true);
        tabWidget_2->setGeometry(QRect(40, 40, 1161, 661));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox = new QGroupBox(tab_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 20, 991, 611));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 101, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 80, 101, 31));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 150, 101, 31));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 220, 101, 31));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 290, 101, 31));
        label_5->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 360, 101, 31));
        label_6->setFont(font);
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(270, 20, 301, 31));
        textBrowser_3 = new QTextBrowser(groupBox);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(270, 80, 301, 31));
        textBrowser_4 = new QTextBrowser(groupBox);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(270, 150, 301, 31));
        textBrowser_5 = new QTextBrowser(groupBox);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(270, 220, 301, 31));
        textBrowser_6 = new QTextBrowser(groupBox);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(270, 290, 301, 31));
        changeInformationPushButton = new QPushButton(groupBox);
        changeInformationPushButton->setObjectName(QStringLiteral("changeInformationPushButton"));
        changeInformationPushButton->setGeometry(QRect(730, 280, 112, 34));
        textBrowser_7 = new QTextBrowser(groupBox);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(270, 360, 301, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 430, 101, 31));
        label_7->setFont(font);
        textBrowser_10 = new QTextBrowser(groupBox);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(270, 430, 301, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 500, 101, 31));
        label_8->setFont(font);
        textBrowser_11 = new QTextBrowser(groupBox);
        textBrowser_11->setObjectName(QStringLiteral("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(270, 500, 301, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 570, 101, 31));
        label_9->setFont(font);
        textBrowser_12 = new QTextBrowser(groupBox);
        textBrowser_12->setObjectName(QStringLiteral("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(270, 570, 301, 31));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        treeWidget_10 = new QTreeWidget(tab_8);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem();
        __qtreewidgetitem9->setText(0, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_10->setHeaderItem(__qtreewidgetitem9);
        treeWidget_10->setObjectName(QStringLiteral("treeWidget_10"));
        treeWidget_10->setGeometry(QRect(20, 50, 1071, 431));
        treeWidget_10->header()->setDefaultSectionSize(180);
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        treeWidget_11 = new QTreeWidget(tab_9);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem();
        __qtreewidgetitem10->setText(0, QString::fromUtf8("\345\233\276\344\271\246\347\274\226\345\217\267"));
        treeWidget_11->setHeaderItem(__qtreewidgetitem10);
        treeWidget_11->setObjectName(QStringLiteral("treeWidget_11"));
        treeWidget_11->setGeometry(QRect(20, 50, 1071, 431));
        treeWidget_11->header()->setDefaultSectionSize(180);
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        treeWidget_3 = new QTreeWidget(tab_10);
        treeWidget_3->setObjectName(QStringLiteral("treeWidget_3"));
        treeWidget_3->setGeometry(QRect(70, 40, 1001, 421));
        treeWidget_3->header()->setDefaultSectionSize(300);
        groupBox_3 = new QGroupBox(tab_10);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(340, 520, 411, 80));
        addFeedBackPushButton = new QPushButton(groupBox_3);
        addFeedBackPushButton->setObjectName(QStringLiteral("addFeedBackPushButton"));
        addFeedBackPushButton->setGeometry(QRect(150, 20, 112, 34));
        tabWidget_2->addTab(tab_10, QString());
        tabWidget->addTab(tab_6, QString());
        Library->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Library);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1223, 30));
        Library->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Library);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Library->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Library);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Library->setStatusBar(statusBar);

        retranslateUi(Library);
        QObject::connect(tabWidget, SIGNAL(tabBarClicked(int)), Library, SLOT(LoginSlot(int)));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QMainWindow *Library)
    {
        Library->setWindowTitle(QApplication::translate("Library", "Library", Q_NULLPTR));
        label_16->setText(QApplication::translate("Library", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#00aaff;\">\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\347\256\200\344\273\213</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("Library", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\346\230\257\344\270\200\346\211\200\344\273\245\346\265\267\346\264\213\345\222\214\346\260\264\344\272\247\345\255\246\347\247\221\344\270\272\347\211\271\350\211\262\357\274\214\345\214\205\346\213\254\347\220\206\345\255\246\343\200\201\345\267\245\345\255\246\343\200\201\345\206\234\345\255\246\343\200\201\345\214\273\357\274\210\350\215\257\357\274\211\345\255\246\343\200\201\347\273\217\346\265\216\345\255\246\343\200\201\347\256\241\347\220\206\345\255\246\343\200\201\346\226\207\345\255\246\343\200\201\346\263\225\345\255\246\343\200\201\346\225\231\350\202\262\345\255\246\343\200\201\345\216\206\345\217\262\345\255\246\347\255\211\345\255\246\347\247\221\351\227\250\347\261\273\350\276\203\344\270\272\351\275\220\345\205\250\347\232\204\346\225\231\350\202\262\351\203\250\347\233\264\345\261\236\351\207\215\347\202\271\347\273\274\345\220\210\346\200\247\345\244\247\345\255\246"
                        "\357\274\214\346\230\257\345\233\275\345\256\266\342\200\234985\345\267\245\347\250\213\342\200\235\345\222\214\342\200\234211\345\267\245\347\250\213\342\200\235\351\207\215\347\202\271\345\273\272\350\256\276\351\253\230\346\240\241\344\271\213\344\270\200\357\274\2142017\345\271\2649\346\234\210\345\205\245\351\200\211\345\233\275\345\256\266\342\200\234\344\270\226\347\225\214\344\270\200\346\265\201\345\244\247\345\255\246\345\273\272\350\256\276\351\253\230\346\240\241\342\200\235\357\274\210A\347\261\273\357\274\211\343\200\202\345\234\250\345\217\221\345\261\225\345\216\206\345\217\262\344\270\212\357\274\214\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\344\270\216\345\261\261\344\270\234\345\244\247\345\255\246\345\275\242\346\210\220\344\272\206\350\277\22130\345\271\264\347\232\204\345\205\261\345\220\214\346\234\237\357\274\2101930\345\271\2649\346\234\210~1958\345\271\2649\346\234\210\357\274\211\357\274\214\350\277\231\344\271\237\345\206\263\345\256\232\344\272\206\344"
                        "\270\244\346\240\241\347\232\204\345\233\276\344\271\246\351\246\206\346\272\220\345\244\264\350\231\275\344\270\215\345\220\214\357\274\214\344\275\206\346\270\212\346\272\220\351\242\207\346\267\261\343\200\202\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\345\247\213\345\273\272\344\272\2161924\345\271\26410\346\234\210\357\274\214\351\246\226\344\273\273\351\246\206\351\225\277\346\230\257\346\210\221\345\233\275\350\221\227\345\220\215\346\225\243\346\226\207\345\255\246\345\256\266\343\200\201\347\277\273\350\257\221\345\256\266\346\242\201\345\256\236\347\247\213\345\205\210\347\224\237\343\200\202\350\207\2631936\345\271\264\345\272\225\357\274\214\351\246\206\350\227\217\344\271\246\347\261\215\345\267\262\350\276\2768.78\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\233\276\344\271\2466.50\344\270\207\345\206\214\357\274\214\345\244\226\346\226\207\345\233\276\344\271\2462.25\344\270\207\345\206\214"
                        "\357\274\233\344\270\255\345\244\226\346\226\207\346\234\237\345\210\2121028\347\247\215\357\274\214\350\256\2415.41\344\270\207\345\206\214\343\200\202\346\212\227\346\227\245\346\210\230\344\272\211\346\227\266\346\234\237\345\255\246\346\240\241\350\242\253\350\277\253\345\215\227\350\277\201\357\274\214\350\207\2631946\345\271\26410\346\234\210\345\261\261\344\270\234\345\244\247\345\255\246\345\234\250\351\235\222\345\262\233\345\244\215\346\240\241\346\227\266\357\274\214\345\216\237\346\234\211\347\232\204\346\226\207\347\214\256\345\217\252\345\211\251\344\270\255\346\226\207\344\271\246\345\210\2125166\345\206\214\343\200\201\345\244\226\346\226\207\344\271\246\345\210\2123398\345\206\214\357\274\214\346\265\201\345\244\261\344\271\235\346\210\220\344\273\245\344\270\212\343\200\2021949\345\271\2646\346\234\210\351\235\222\345\262\233\350\247\243\346\224\276\357\274\214\344\270\255\345\233\275\345\217\244\345\205\270\346\226\207\345\255\246\345\256\266\351\231\206\344\276\203\345\246\202\346\225\231\346"
                        "\216\210\344\273\273\345\233\276\344\271\246\351\246\206\351\246\206\351\225\277\343\200\2021951\345\271\264\345\215\216\344\270\234\345\244\247\345\255\246\344\270\216\345\233\275\347\253\213\345\261\261\344\270\234\345\244\247\345\255\246\345\220\210\345\271\266\346\210\220\347\253\213\344\272\206\346\226\260\347\232\204\345\261\261\344\270\234\345\244\247\345\255\246\357\274\214\344\271\246\345\210\212\345\220\210\350\256\241\351\200\27620\344\270\207\345\206\214\343\200\2021958\345\271\264\345\261\261\344\270\234\345\244\247\345\255\246\345\245\211\345\221\275\350\277\201\345\233\236\346\265\216\345\215\227\357\274\2141959\345\271\264\345\261\261\344\270\234\346\265\267\346\264\213\345\255\246\351\231\242\346\210\220\347\253\213\357\274\214\345\255\246\346\240\241\345\274\200\345\220\257\344\272\206\346\226\260\347\232\204\345\216\206\345\217\262\345\217\221\345\261\225\351\230\266\346\256\265\357\274\214\345\233\276\344\271\246\351\246\206\344\271\237\345\276\227\345\210\260\350\276\203\345\277\253\345\217"
                        "\221\345\261\225\343\200\202\346\226\207\351\235\251\345\215\201\345\271\264\357\274\214\345\255\246\346\240\241\344\272\213\344\270\232\351\201\255\345\217\227\351\207\215\345\244\247\346\215\237\345\244\261\357\274\214\345\233\276\344\271\246\351\246\206\344\272\246\344\270\215\344\276\213\345\244\226\343\200\202\346\224\271\351\235\251\345\274\200\346\224\276\344\273\245\345\220\216\357\274\214\345\233\276\344\271\246\351\246\206\346\226\207\347\214\256\345\273\272\350\256\276\351\232\217\347\235\200\345\220\204\351\241\271\344\272\213\344\270\232\347\232\204\346\201\242\345\244\215\345\217\221\345\261\225\351\200\220\346\270\220\350\265\260\344\270\212\346\255\243\350\247\204\343\200\2021985\345\271\264\351\261\274\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\351\246\206\350\227\217\345\233\276\344\271\246\346\234\21156.95\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\233\276\344"
                        "\271\24644.64\344\270\207\345\206\214\343\200\201\345\244\226\346\226\207\345\233\276\344\271\24612.31\344\270\207\345\206\214\357\274\233\351\246\206\350\227\217\346\234\237\345\210\212\345\220\210\350\256\242\346\234\2548.48\344\270\207\345\206\214\357\274\214\345\205\266\344\270\255\344\270\255\346\226\207\345\210\2123.14\344\270\207\345\206\214\343\200\201\345\244\226\346\226\207\345\210\2125.35\344\270\207\345\206\214\343\200\2021992\345\271\264\346\265\256\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\345\273\272\347\255\221\351\235\242\347\247\2578200\345\271\263\346\226\271\347\261\263\357\274\214\344\272\2162010\345\271\2643\346\234\210\346\222\244\345\271\266\343\200\2022007\345\271\264\345\264\202\345\261\261\346\240\241\345\214\272\345\233\276\344\271\246\351\246\206\346\212\225\345\205\245\344\275\277\347\224\250\357\274\214\346\226\260\351\246\206\345\273\272\347\255\221\351\235\242\347\247\2574.5\344\270\207\345"
                        "\271\263\346\226\271\347\261\263\357\274\214\351\230\205\350\247\210\350\207\252\344\277\256\345\272\247\344\275\215\350\277\2213000\344\270\252\357\274\233\345\212\237\350\203\275\345\270\203\345\261\200\347\247\221\345\255\246\357\274\214\350\256\276\345\244\207\351\205\215\347\275\256\345\205\210\350\277\233\357\274\214\350\207\252\345\212\250\345\214\226\347\250\213\345\272\246\350\276\203\351\253\230\357\274\214\344\270\27221\344\270\226\347\272\252\345\233\276\344\271\246\351\246\206\351\200\202\345\272\224\345\255\246\346\240\241\344\272\213\344\270\232\345\217\221\345\261\225\345\245\240\345\256\232\344\272\206\345\235\232\345\256\236\345\237\272\347\241\200\343\200\202\345\216\206\347\273\217\350\277\22190\345\271\264\347\232\204\345\217\221\345\261\225\357\274\214\344\270\255\345\233\275\346\265\267\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206\345\267\262\347\273\217\346\210\220\344\270\272\351\246\206\350\210\215\344\274\230\350\211\257\343\200\201\350\265\204\346\272\220\344"
                        "\270\260\345\257\214\343\200\201\345\270\203\345\261\200\345\220\210\347\220\206\343\200\201\347\256\241\347\220\206\347\247\221\345\255\246\347\232\204\347\273\274\345\220\210\346\200\247\345\233\276\344\271\246\351\246\206\343\200\202\345\212\236\351\246\206\345\256\227\346\227\250\346\230\257\342\200\234\344\270\216\350\257\273\350\200\205\345\205\261\345\220\214\350\277\233\346\255\245\342\200\235\357\274\214\347\224\261\350\221\227\345\220\215\344\275\234\345\256\266\343\200\201\346\210\221\346\240\241\351\241\276\351\227\256\343\200\201\346\225\231\346\216\210\347\216\213\350\222\231\345\205\210\347\224\237\351\242\230\345\206\231\343\200\202 </span></p></body></html>", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_4->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Library", "\345\205\254\345\221\212\346\240\207\351\242\230", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Library", "\347\274\226\345\217\267", Q_NULLPTR));
        label_22->setText(QApplication::translate("Library", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#00aaff;\">\345\205\254\345\221\212\346\240\217</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Library", "\351\246\226\351\241\265", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_12->headerItem();
        ___qtreewidgetitem1->setText(9, QApplication::translate("Library", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem1->setText(8, QApplication::translate("Library", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem1->setText(7, QApplication::translate("Library", "\345\275\223\345\211\215\345\200\237\351\230\205\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem1->setText(6, QApplication::translate("Library", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem1->setText(5, QApplication::translate("Library", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("Library", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("Library", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Library", "\344\271\246\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Library", "ISBN", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButton->setText(QApplication::translate("Library", "\351\246\226\351\241\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Library", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Library", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Library", "\345\260\276\351\241\265", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Library", "\344\271\246\345\220\215", Q_NULLPTR)
         << QApplication::translate("Library", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("Library", "ISBN", Q_NULLPTR)
        );
        pushButton_7->setText(QApplication::translate("Library", "\346\237\245\350\257\242", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Library", "\344\271\246\347\233\256\346\243\200\347\264\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("Library", "\344\271\246\347\261\215\345\210\206\347\261\273", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Library", "F ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Library", "\346\263\225\345\276\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Library", "G", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Library", "\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("Library", "H", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("Library", "\346\265\267\346\264\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem9->setText(0, QApplication::translate("Library", "J ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("Library", "\347\273\217\346\265\216", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("Library", "\350\256\241\347\256\227\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QApplication::translate("Library", "\344\272\272\345\267\245\346\231\272\350\203\275", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QApplication::translate("Library", "\346\267\261\345\272\246\345\255\246\344\271\240", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem14->setText(0, QApplication::translate("Library", "W", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(0, QApplication::translate("Library", "\347\211\251\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem16->setText(0, QApplication::translate("Library", "Z ", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(0, QApplication::translate("Library", "\346\224\277\346\262\273", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Library", "\345\210\206\347\261\273\346\265\217\350\247\210", Q_NULLPTR));
        label_18->setText(QApplication::translate("Library", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#aa55ff;\">\346\216\250\350\215\220\344\271\246\347\261\215\346\246\234\345\215\225</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("Library", "\347\273\237\350\256\241\350\214\203\345\233\264\357\274\232\350\277\2212\344\270\252\346\234\210  \347\273\237\350\256\241\346\226\271\345\274\217\357\274\232\345\200\237\351\230\205\346\254\241\346\225\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = treeWidget_9->headerItem();
        ___qtreewidgetitem18->setText(8, QApplication::translate("Library", "\344\271\246\344\273\267", Q_NULLPTR));
        ___qtreewidgetitem18->setText(7, QApplication::translate("Library", "\344\271\246\346\234\254\346\200\273\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem18->setText(6, QApplication::translate("Library", "\345\275\223\345\211\215\345\200\237\351\230\205\346\225\260\351\207\217", Q_NULLPTR));
        ___qtreewidgetitem18->setText(5, QApplication::translate("Library", "\344\270\223\344\270\232\347\261\273\345\210\253", Q_NULLPTR));
        ___qtreewidgetitem18->setText(4, QApplication::translate("Library", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem18->setText(3, QApplication::translate("Library", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem18->setText(2, QApplication::translate("Library", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem18->setText(1, QApplication::translate("Library", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Library", "\347\203\255\351\227\250\346\216\250\350\215\220", Q_NULLPTR));
        label_15->setText(QApplication::translate("Library", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#55aaff;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\351\246\206\347\225\231\350\250\200\346\235\277\357\274\201</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Library", "\346\267\273\345\212\240\347\225\231\350\250\200", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Library", "\346\210\221\347\232\204\347\225\231\350\250\200", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem19 = treeWidget_2->headerItem();
        ___qtreewidgetitem19->setText(3, QApplication::translate("Library", "\347\225\231\350\250\200\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem19->setText(2, QApplication::translate("Library", "\347\225\231\350\250\200", Q_NULLPTR));
        ___qtreewidgetitem19->setText(1, QApplication::translate("Library", "\345\255\246\345\217\267", Q_NULLPTR));
        ___qtreewidgetitem19->setText(0, QApplication::translate("Library", "\345\247\223\345\220\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Library", "\347\225\231\350\250\200\346\235\277", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Library", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Library", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Library", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Library", "\345\271\264\347\272\247\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Library", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Library", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        changeInformationPushButton->setText(QApplication::translate("Library", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        label_7->setText(QApplication::translate("Library", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("Library", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("Library", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Library", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidget_10->headerItem();
        ___qtreewidgetitem20->setText(5, QApplication::translate("Library", "\345\275\222\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem20->setText(4, QApplication::translate("Library", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem20->setText(3, QApplication::translate("Library", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem20->setText(2, QApplication::translate("Library", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem20->setText(1, QApplication::translate("Library", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("Library", "\345\200\237\351\230\205\345\216\206\345\217\262", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem21 = treeWidget_11->headerItem();
        ___qtreewidgetitem21->setText(5, QApplication::translate("Library", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem21->setText(4, QApplication::translate("Library", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem21->setText(3, QApplication::translate("Library", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        ___qtreewidgetitem21->setText(2, QApplication::translate("Library", "\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem21->setText(1, QApplication::translate("Library", "\344\271\246\345\220\215", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("Library", "\345\275\223\345\211\215\345\200\237\351\230\205", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem22 = treeWidget_3->headerItem();
        ___qtreewidgetitem22->setText(2, QApplication::translate("Library", "\345\233\236\345\244\215", Q_NULLPTR));
        ___qtreewidgetitem22->setText(1, QApplication::translate("Library", "\345\217\215\351\246\210\346\227\266\351\227\264", Q_NULLPTR));
        ___qtreewidgetitem22->setText(0, QApplication::translate("Library", "\345\217\215\351\246\210\345\206\205\345\256\271", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        addFeedBackPushButton->setText(QApplication::translate("Library", "\346\267\273\345\212\240\345\217\215\351\246\210", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("Library", "\346\210\221\347\232\204\346\266\210\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Library", "\346\210\221\347\232\204\345\233\276\344\271\246\351\246\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
