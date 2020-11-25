#include "menu.h"
#include "ui_menu.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
    ui=nullptr;
}

void Menu::on_pushButton_balance_clicked()
{
    QString id=getCardFromMain();   //gets id from Mainwindow using menu class getter.
    QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/account/account/"+id));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.get(request);
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();

        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        //QJsonObject jsobj = json_doc.object();  // useless line? wtf...
        QJsonArray jsarr = json_doc.array();

        QString account;
        foreach (const QJsonValue &value, jsarr) {
          QJsonObject jsob = value.toObject();
          account+=jsob["owner"].toString()+", "+jsob["account_number"].toString()+"\r"+jsob["account_balance"].toString()+" €"+"\r";
          ui->textEdit_balance->setText(account);
        }

        reply->deleteLater();
}


void Menu::on_pushButton_log_clicked()
{
    {
        QString id=getCardFromMain();   //gets id from Mainwindow using menu class getter.
        QNetworkRequest request(QUrl("http://localhost/Group2/RestApi/index.php/api/log/log/"+id));
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
            //Authenticate
            QString username="admin";
            QString password="1234";
            QString concatenatedCredentials = username + ":" + password;
               QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
               QString headerData = "Basic " + data;
               request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

            QNetworkAccessManager nam;
            QNetworkReply *reply = nam.get(request);
            while (!reply->isFinished())
            {
                qApp->processEvents();
            }
            QByteArray response_data = reply->readAll();

            QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
            //QJsonObject jsobj = json_doc.object();  // useless line? wtf...
            QJsonArray jsarr = json_doc.array();

            QString log;
            foreach (const QJsonValue &value, jsarr) {
              QJsonObject jsob = value.toObject();
              log+=jsob["date"].toString()+", "+jsob["owner"].toString()+", "+jsob["account_number"].toString()+", "+jsob["event"].toString()+"\r";
              if(jsob["date"].toString()==""){
                  ui->textEdit_log->setText("Ei tapahtumia.");
              }
              else
                  ui->textEdit_log->setText(log);
            }

            reply->deleteLater();
    }
}

QString Menu::getCardFromMain() const
{
    return CardFromMain;
}

void Menu::setCardFromMain(const QString &value)
{
    CardFromMain = value;
}

void Menu::on_pushButton_20e_clicked()
{
    QString card_id, amount;
    card_id=getCardFromMain();
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
        on_pushButton_balance_clicked();
        on_pushButton_log_clicked();
}

void Menu::on_pushButton_40e_clicked()
{
    QString card_id, amount;
    card_id=getCardFromMain();
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
        on_pushButton_balance_clicked();
        on_pushButton_log_clicked();
}

void Menu::on_pushButton_50e_clicked()
{
    QString card_id, amount;
    card_id=getCardFromMain();
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
        on_pushButton_balance_clicked();
        on_pushButton_log_clicked();
}

void Menu::on_pushButton_100e_clicked()
{
    QString card_id, amount;
    card_id=getCardFromMain();
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
        on_pushButton_balance_clicked();
        on_pushButton_log_clicked();
}

void Menu::on_pushButton_enterAmount_clicked()
{
    QString card_id, amount;
    card_id=getCardFromMain();
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
        on_pushButton_balance_clicked();
        on_pushButton_log_clicked();
}
