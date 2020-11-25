#ifndef MENU_H
#define MENU_H




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

    void on_pushButton_balance_clicked();

    void on_pushButton_log_clicked();

    void on_pushButton_20e_clicked();

    void on_pushButton_40e_clicked();

    void on_pushButton_50e_clicked();

    void on_pushButton_100e_clicked();

    void on_pushButton_enterAmount_clicked();

private:
    Ui::Menu *ui;
    QString CardFromMain;
};

#endif // MENU_H
