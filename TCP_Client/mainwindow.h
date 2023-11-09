#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtNetwork>

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
    void on_ConnPushButton_clicked();
    void on_ClearRecPushButton_clicked();
    void on_SendPushButton_clicked();
    void on_ClearSendPushButton_clicked();

    void ReadData(void);//服务器端随机发来的数据,产生信号,触发该槽函数,进行数据读取
    void ReadError(QAbstractSocket::SocketError);//链路出错,如对方拆除连接、网络断开等,产生错误信号,触发该槽函数,实现关闭当前连接,归位初始状态

private:
    Ui::MainWindow *ui;

    QTcpSocket *MyTCPClient;
};

#endif // MAINWINDOW_H
