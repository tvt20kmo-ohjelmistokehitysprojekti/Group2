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
