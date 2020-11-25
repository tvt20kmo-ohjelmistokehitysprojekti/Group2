#include "withdrawal.h"
#include "ui_withdrawal.h"

withdrawal::withdrawal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::withdrawal)
{
    ui->setupUi(this);
}

withdrawal::~withdrawal()
{
    delete ui;
}

void withdrawal::on_pushButton_20e_clicked()
{

   //Lisää tähän 20e-napin toiminnot (nostetaan 20e)
}

void withdrawal::on_pushButton_40e_clicked()
{
    //Lisää tähän 40e-napin toiminnot (nostetaan x euroa)
}

void withdrawal::on_pushButton_50e_clicked()
{
    //Lisää tähän 50e-napin toiminnot (nostetaan x euroa)
}

void withdrawal::on_pushButton_100e_clicked()
{
    //Lisää tähän 100e-napin toiminnot (nostetaan x euroa)
}

void withdrawal::on_pushButton_enterAmount_clicked()
{
    //Lisää tähän "Muu summa" -napin toiminnot (nostetaan x euroa)
}

void withdrawal::on_pushButton_menu_clicked()
{
    //Lisää tähän toiminnot, jolla päästään withdrawal-valikosta menu-valikkoon
}

QString withdrawal::getCardFromMain2() const
{
    return CardFromMain2;
}

void withdrawal::setCardFromMain2(const QString &value)
{
    CardFromMain2 = value;
}
