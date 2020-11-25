#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <menu.h>
#include <withdrawal.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    Menu *mp;
    withdrawal *wp;
};

#endif // MAINWINDOW_H
