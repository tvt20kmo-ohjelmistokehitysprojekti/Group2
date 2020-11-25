#include "mainwindow.h"
#include "menu.h"
#include "ui_mainwindow.h"
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QJsonDocument>
#include <qjsondocument.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
    delete mp;
    mp=nullptr;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString card_id, card_pin;
    card_id=ui->lineEdit_cardID->text();
    card_pin=ui->lineEdit_PIN->text();

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/login/check_login/?card_id="+card_id+"&card_pin="+card_pin));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
            QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
            QString headerData = "Basic " + data;
            request.setRawHeader("Authorization", headerData.toLocal8Bit() );

        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.get(request);
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();

        qDebug()<<"DATA:"+response_data;

        reply->deleteLater();

        if(response_data=="true")
        {
            ui->label_test->setText("Right");
            mp=new Menu;
            mp->setCardFromMain(card_id);
            mp->show();
            this->close();
        }
        else
        {
            ui->label_test->setText("Kortin numero tai pinkoodi virheellinen");
        }




}
