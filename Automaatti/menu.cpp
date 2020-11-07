#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_withdrawal_clicked()
{
    //Lisää tähän nosto-napin toiminnot
}

void Menu::on_pushButton_balance_clicked()
{
    //Lisää tähän saldo-napin toiminnot
}

void Menu::on_pushButton_log_clicked()
{
    //Lisää tähän tapahtumat-napin toiminnot
}
