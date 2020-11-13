/********************************************************************************
** Form generated from reading UI file 'withdrawal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWAL_H
#define UI_WITHDRAWAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_withdrawal
{
public:
    QLabel *label;
    QPushButton *pushButton_20e;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_40e;
    QPushButton *pushButton_50e;
    QPushButton *pushButton_100e;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_enterAmount;
    QLabel *label_6;
    QPushButton *pushButton_menu;
    QLineEdit *lineEdit_enterAmount;

    void setupUi(QWidget *withdrawal)
    {
        if (withdrawal->objectName().isEmpty())
            withdrawal->setObjectName(QStringLiteral("withdrawal"));
        withdrawal->resize(599, 687);
        QFont font;
        font.setPointSize(14);
        withdrawal->setFont(font);
        label = new QLabel(withdrawal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 91, 21));
        pushButton_20e = new QPushButton(withdrawal);
        pushButton_20e->setObjectName(QStringLiteral("pushButton_20e"));
        pushButton_20e->setGeometry(QRect(200, 70, 91, 31));
        label_2 = new QLabel(withdrawal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 70, 91, 31));
        label_3 = new QLabel(withdrawal);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 120, 91, 31));
        pushButton_40e = new QPushButton(withdrawal);
        pushButton_40e->setObjectName(QStringLiteral("pushButton_40e"));
        pushButton_40e->setGeometry(QRect(200, 120, 91, 31));
        pushButton_50e = new QPushButton(withdrawal);
        pushButton_50e->setObjectName(QStringLiteral("pushButton_50e"));
        pushButton_50e->setGeometry(QRect(200, 170, 91, 31));
        pushButton_100e = new QPushButton(withdrawal);
        pushButton_100e->setObjectName(QStringLiteral("pushButton_100e"));
        pushButton_100e->setGeometry(QRect(200, 220, 91, 31));
        label_4 = new QLabel(withdrawal);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 170, 91, 31));
        label_5 = new QLabel(withdrawal);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 220, 91, 31));
        pushButton_enterAmount = new QPushButton(withdrawal);
        pushButton_enterAmount->setObjectName(QStringLiteral("pushButton_enterAmount"));
        pushButton_enterAmount->setGeometry(QRect(200, 270, 91, 31));
        label_6 = new QLabel(withdrawal);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 270, 121, 31));
        pushButton_menu = new QPushButton(withdrawal);
        pushButton_menu->setObjectName(QStringLiteral("pushButton_menu"));
        pushButton_menu->setGeometry(QRect(220, 360, 151, 31));
        lineEdit_enterAmount = new QLineEdit(withdrawal);
        lineEdit_enterAmount->setObjectName(QStringLiteral("lineEdit_enterAmount"));
        lineEdit_enterAmount->setGeometry(QRect(430, 270, 101, 31));

        retranslateUi(withdrawal);

        QMetaObject::connectSlotsByName(withdrawal);
    } // setupUi

    void retranslateUi(QWidget *withdrawal)
    {
        withdrawal->setWindowTitle(QApplication::translate("withdrawal", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("withdrawal", "Nosto", Q_NULLPTR));
        pushButton_20e->setText(QApplication::translate("withdrawal", "Valitse", Q_NULLPTR));
        label_2->setText(QApplication::translate("withdrawal", "20 \342\202\254", Q_NULLPTR));
        label_3->setText(QApplication::translate("withdrawal", "40 \342\202\254", Q_NULLPTR));
        pushButton_40e->setText(QApplication::translate("withdrawal", "Valitse", Q_NULLPTR));
        pushButton_50e->setText(QApplication::translate("withdrawal", "Valitse", Q_NULLPTR));
        pushButton_100e->setText(QApplication::translate("withdrawal", "Valitse", Q_NULLPTR));
        label_4->setText(QApplication::translate("withdrawal", "50 \342\202\254", Q_NULLPTR));
        label_5->setText(QApplication::translate("withdrawal", "100 \342\202\254", Q_NULLPTR));
        pushButton_enterAmount->setText(QApplication::translate("withdrawal", "Valitse", Q_NULLPTR));
        label_6->setText(QApplication::translate("withdrawal", "Muu summa:", Q_NULLPTR));
        pushButton_menu->setText(QApplication::translate("withdrawal", "P\303\244\303\244valikko", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class withdrawal: public Ui_withdrawal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWAL_H
