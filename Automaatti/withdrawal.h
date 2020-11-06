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

private:
    Ui::withdrawal *ui;
};

#endif // WITHDRAWAL_H
