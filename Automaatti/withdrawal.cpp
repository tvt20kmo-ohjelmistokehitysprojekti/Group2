#include "withdrawal.h"
#include "ui_withdrawal.h"
#include "menu.h"

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>

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
    QString card_id, amount;
    card_id="4444";   //getCardFromMain(); periytä
    amount="20";

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/withdraw/withdraw/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QJsonObject json;
        json.insert("card_id",card_id);
        json.insert("amount",amount);
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        //ui->labelInfo->setText("Added : "+response_data);
        reply->deleteLater();
}

void withdrawal::on_pushButton_40e_clicked()
{
    QString card_id, amount;
    card_id="4444";   //getCardFromMain(); periytä
    amount="40";

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/withdraw/withdraw/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QJsonObject json;
        json.insert("card_id",card_id);
        json.insert("amount",amount);
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        //ui->labelInfo->setText("Added : "+response_data);
        reply->deleteLater();
}

void withdrawal::on_pushButton_50e_clicked()
{
    QString card_id, amount;
    card_id="4444";   //getCardFromMain(); periytä
    amount="50";

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/withdraw/withdraw/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QJsonObject json;
        json.insert("card_id",card_id);
        json.insert("amount",amount);
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        //ui->labelInfo->setText("Added : "+response_data);
        reply->deleteLater();
}

void withdrawal::on_pushButton_100e_clicked()
{
    QString card_id, amount;
    card_id="4444";   //getCardFromMain(); periytä
    amount="100";

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/withdraw/withdraw/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QJsonObject json;
        json.insert("card_id",card_id);
        json.insert("amount",amount);
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        //ui->labelInfo->setText("Added : "+response_data);
        reply->deleteLater();
}

void withdrawal::on_pushButton_enterAmount_clicked()
{
    QString card_id, amount;
    card_id="4444";   //getCardFromMain(); periytä
    amount=ui->lineEdit_enterAmount->text();

    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/withdraw/withdraw/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QJsonObject json;
        json.insert("card_id",card_id);
        json.insert("amount",amount);
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        //ui->labelInfo->setText("Added : "+response_data);
        reply->deleteLater();
}

void withdrawal::on_pushButton_menu_clicked()
{
    //Lisää tähän toiminnot, jolla päästään withdrawal-valikosta menu-valikkoon
}
