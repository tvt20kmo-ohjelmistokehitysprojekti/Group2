#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <QWidget>

namespace Ui {
class withdrawal;
}

class withdrawal : public QWidget
{
    Q_OBJECT

public:
    explicit withdrawal(QWidget *parent = 0);
    ~withdrawal();

    QString getCardFromMain2() const;
    void setCardFromMain2(const QString &value);

private slots:
    void on_pushButton_20e_clicked();

    void on_pushButton_40e_clicked();

    void on_pushButton_50e_clicked();

    void on_pushButton_100e_clicked();

    void on_pushButton_enterAmount_clicked();

    void on_pushButton_menu_clicked();

private:
    Ui::withdrawal *ui;
    QString CardFromMain2;
};

#endif // WITHDRAWAL_H
