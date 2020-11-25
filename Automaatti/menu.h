#ifndef MENU_H
#define MENU_H

#include "withdrawal.h"

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

    QString getCardFromMain() const;
    void setCardFromMain(const QString &value);

private slots:
    void on_pushButton_withdrawal_clicked();

    void on_pushButton_balance_clicked();

    void on_pushButton_log_clicked();

private:
    Ui::Menu *ui;
    QString CardFromMain;
    withdrawal *wp;
};

#endif // MENU_H
