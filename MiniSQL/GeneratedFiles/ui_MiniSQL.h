/********************************************************************************
** Form generated from reading UI file 'MiniSQL.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINISQL_H
#define UI_MINISQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniSQLClass
{
public:
    QTextEdit *miniCmd;
    QLabel *SQLlabel;
    QLineEdit *SQLlineEdit;
    QLabel *Scriptlabel;
    QComboBox *filePathBox;
    QToolButton *fileSelectButton;
    QPushButton *execButton;

    void setupUi(QWidget *MiniSQLClass)
    {
        if (MiniSQLClass->objectName().isEmpty())
            MiniSQLClass->setObjectName(QStringLiteral("MiniSQLClass"));
        MiniSQLClass->resize(741, 411);
        miniCmd = new QTextEdit(MiniSQLClass);
        miniCmd->setObjectName(QStringLiteral("miniCmd"));
        miniCmd->setGeometry(QRect(0, 70, 741, 341));
        SQLlabel = new QLabel(MiniSQLClass);
        SQLlabel->setObjectName(QStringLiteral("SQLlabel"));
        SQLlabel->setGeometry(QRect(10, 10, 71, 16));
        SQLlineEdit = new QLineEdit(MiniSQLClass);
        SQLlineEdit->setObjectName(QStringLiteral("SQLlineEdit"));
        SQLlineEdit->setGeometry(QRect(90, 10, 641, 20));
        Scriptlabel = new QLabel(MiniSQLClass);
        Scriptlabel->setObjectName(QStringLiteral("Scriptlabel"));
        Scriptlabel->setGeometry(QRect(10, 40, 121, 16));
        filePathBox = new QComboBox(MiniSQLClass);
        filePathBox->setObjectName(QStringLiteral("filePathBox"));
        filePathBox->setGeometry(QRect(140, 40, 331, 22));
        fileSelectButton = new QToolButton(MiniSQLClass);
        fileSelectButton->setObjectName(QStringLiteral("fileSelectButton"));
        fileSelectButton->setGeometry(QRect(480, 40, 31, 21));
        execButton = new QPushButton(MiniSQLClass);
        execButton->setObjectName(QStringLiteral("execButton"));
        execButton->setGeometry(QRect(570, 40, 75, 23));

        retranslateUi(MiniSQLClass);

        QMetaObject::connectSlotsByName(MiniSQLClass);
    } // setupUi

    void retranslateUi(QWidget *MiniSQLClass)
    {
        MiniSQLClass->setWindowTitle(QApplication::translate("MiniSQLClass", "MiniSQL", nullptr));
        SQLlabel->setText(QApplication::translate("MiniSQLClass", "\350\276\223\345\205\245SQL\350\257\255\345\217\245:", nullptr));
        Scriptlabel->setText(QApplication::translate("MiniSQLClass", "\351\200\211\346\213\251\346\226\207\344\273\266\346\211\247\350\241\214SQL\350\204\232\346\234\254:", nullptr));
        fileSelectButton->setText(QApplication::translate("MiniSQLClass", "...", nullptr));
        execButton->setText(QApplication::translate("MiniSQLClass", "\346\211\247\350\241\214\350\204\232\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniSQLClass: public Ui_MiniSQLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINISQL_H
