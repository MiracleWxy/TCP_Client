#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this ->setWindowFlags(this->windowFlags() |
                          Qt::FramelessWindowHint |
                          Qt::WindowTitleHint);
    this->setWindowFlags(this->windowFlags() &
                         ~Qt::WindowMinMaxButtonsHint);
    this->showMaximized();

    ui->setupUi(this);

    MyTCPClient=new QTcpSocket(this);
    connect(MyTCPClient,
                      SIGNAL(readyRead()),
                      this,
                      SLOT(ReadData()));
    connect(MyTCPClient,
                    SIGNAL(error(QAbstractSocket::SocketError)),
                    this,
                    SLOT(ReadError(QAbstractSocket::SocketError)));


}

MainWindow::~MainWindow()
{
    MyTCPClient->abort();
    MyTCPClient->close();
    delete MyTCPClient;
    delete ui;
}

void MainWindow::on_ConnPushButton_clicked()
{
    if(MyTCPClient->isOpen())
    {
        MyTCPClient->abort();
        ui->ConnPushButton->setText("Connect");
        //ui->ConnPushButton->setStyleSheet("background-color: rgb(170, 255, 127)");
        ui->ConnPushButton->setStyleSheet("background-color: rgb(0，0，0)");
//        ui->IPLineEdit->setReadOnly(false);
//        ui->PortLineEdit->setReadOnly(false);
        ui->IPLineEdit->setEnabled(true);
        ui->PortLineEdit->setEnabled(true);

    }
    else
    {
        MyTCPClient->abort();
        MyTCPClient->connectToHost(ui->IPLineEdit->text().toLocal8Bit(),
                                                                ui->PortLineEdit->text().toInt());
        if(MyTCPClient->waitForConnected(3000))
        {
            ui->ConnPushButton->setText("Discon");
            ui->ConnPushButton->setStyleSheet("background-color: rgb(170, 255, 127);");
//            ui->IPLineEdit->setReadOnly(true);
//            ui->PortLineEdit->setReadOnly(true);
            ui->IPLineEdit->setEnabled(false);
            ui->PortLineEdit->setEnabled(false);

        }
    }
}

void MainWindow::on_ClearRecPushButton_clicked()
{
    ui->RecTextEdit->clear();
}

void MainWindow::on_SendPushButton_clicked()
{
    QByteArray Ba;
    if(MyTCPClient->isOpen())
    {
        Ba=ui->SendLineEdit->text().toLocal8Bit();
        MyTCPClient->write(Ba);
        MyTCPClient->flush();
    }

}

void MainWindow::on_ClearSendPushButton_clicked()
{
    ui->SendLineEdit->clear();
}

void MainWindow::ReadData(void)//服务器端随机发来的数据,产生信号,触发该槽函数,进行数据读取
{
    QByteArray Ba;
    Ba=MyTCPClient->readAll();
    if(!Ba.isEmpty())
    {
        ui->RecTextEdit->append(QString::fromLocal8Bit(Ba));
    }
}


void MainWindow::ReadError(QAbstractSocket::SocketError)//链路出错,如对方拆除连接、网络断开等,产生错误信号,触发该槽函数,实现关闭当前连接,归位初始状态
{
    MyTCPClient->abort();
    MyTCPClient->close();
    ui->ConnPushButton->setText("Connect");
    ui->ConnPushButton->setStyleSheet("background-color: rgb(0，0，0)");
//    ui->IPLineEdit->setReadOnly(false);
//    ui->PortLineEdit->setReadOnly(false);
    ui->IPLineEdit->setEnabled(true);
    ui->PortLineEdit->setEnabled(true);

}
