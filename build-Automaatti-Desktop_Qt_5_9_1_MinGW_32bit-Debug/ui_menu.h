/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_withdrawal;
    QPushButton *pushButton_balance;
    QPushButton *pushButton_log;
    QTextEdit *textEdit_log;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *textEdit_balance;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(605, 682);
        QFont font;
        font.setPointSize(14);
        Menu->setFont(font);
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 141, 31));
        label_2 = new QLabel(Menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 80, 91, 31));
        label_3 = new QLabel(Menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 140, 101, 31));
        label_4 = new QLabel(Menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 200, 151, 31));
        pushButton_withdrawal = new QPushButton(Menu);
        pushButton_withdrawal->setObjectName(QStringLiteral("pushButton_withdrawal"));
        pushButton_withdrawal->setGeometry(QRect(190, 80, 91, 31));
        pushButton_balance = new QPushButton(Menu);
        pushButton_balance->setObjectName(QStringLiteral("pushButton_balance"));
        pushButton_balance->setGeometry(QRect(190, 140, 91, 31));
        pushButton_log = new QPushButton(Menu);
        pushButton_log->setObjectName(QStringLiteral("pushButton_log"));
        pushButton_log->setGeometry(QRect(190, 200, 91, 31));
        textEdit_log = new QTextEdit(Menu);
        textEdit_log->setObjectName(QStringLiteral("textEdit_log"));
        textEdit_log->setGeometry(QRect(40, 510, 521, 131));
        label_5 = new QLabel(Menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 470, 151, 31));
        label_6 = new QLabel(Menu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 260, 101, 31));
        textEdit_balance = new QTextEdit(Menu);
        textEdit_balance->setObjectName(QStringLiteral("textEdit_balance"));
        textEdit_balance->setGeometry(QRect(40, 300, 521, 131));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Menu", "Valitse toiminto", Q_NULLPTR));
        label_2->setText(QApplication::translate("Menu", "Nosto", Q_NULLPTR));
        label_3->setText(QApplication::translate("Menu", "Saldo", Q_NULLPTR));
        label_4->setText(QApplication::translate("Menu", "Tapahtumat", Q_NULLPTR));
        pushButton_withdrawal->setText(QApplication::translate("Menu", "Valitse", Q_NULLPTR));
        pushButton_balance->setText(QApplication::translate("Menu", "Valitse", Q_NULLPTR));
        pushButton_log->setText(QApplication::translate("Menu", "Valitse", Q_NULLPTR));
        label_5->setText(QApplication::translate("Menu", "Tapahtumat", Q_NULLPTR));
        label_6->setText(QApplication::translate("Menu", "Saldo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
