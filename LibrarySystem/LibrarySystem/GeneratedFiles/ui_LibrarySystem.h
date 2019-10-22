/********************************************************************************
** Form generated from reading UI file 'LibrarySystem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYSYSTEM_H
#define UI_LIBRARYSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_LibrarySystemClass
{
public:

    void setupUi(QDialog *LibrarySystemClass)
    {
        if (LibrarySystemClass->objectName().isEmpty())
            LibrarySystemClass->setObjectName(QStringLiteral("LibrarySystemClass"));
        LibrarySystemClass->resize(600, 400);

        retranslateUi(LibrarySystemClass);

        QMetaObject::connectSlotsByName(LibrarySystemClass);
    } // setupUi

    void retranslateUi(QDialog *LibrarySystemClass)
    {
        LibrarySystemClass->setWindowTitle(QApplication::translate("LibrarySystemClass", "LibrarySystem", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibrarySystemClass: public Ui_LibrarySystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYSYSTEM_H
