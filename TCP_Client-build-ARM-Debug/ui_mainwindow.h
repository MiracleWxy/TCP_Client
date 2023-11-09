/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *IPLineEdit;
    QLineEdit *PortLineEdit;
    QPushButton *ConnPushButton;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *RecTextEdit;
    QLabel *label_3;
    QPushButton *ClearRecPushButton;
    QLabel *label_4;
    QPushButton *SendPushButton;
    QPushButton *ClearSendPushButton;
    QLineEdit *SendLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(150, 30, 281, 41));
        QFont font;
        font.setPointSize(12);
        IPLineEdit->setFont(font);
        PortLineEdit = new QLineEdit(centralWidget);
        PortLineEdit->setObjectName(QString::fromUtf8("PortLineEdit"));
        PortLineEdit->setGeometry(QRect(150, 100, 281, 41));
        QFont font1;
        font1.setPointSize(13);
        PortLineEdit->setFont(font1);
        ConnPushButton = new QPushButton(centralWidget);
        ConnPushButton->setObjectName(QString::fromUtf8("ConnPushButton"));
        ConnPushButton->setGeometry(QRect(470, 30, 131, 101));
        QFont font2;
        font2.setPointSize(15);
        ConnPushButton->setFont(font2);
        ConnPushButton->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 81, 41));
        QFont font3;
        font3.setPointSize(14);
        label->setFont(font3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 91, 41));
        label_2->setFont(font1);
        RecTextEdit = new QTextEdit(centralWidget);
        RecTextEdit->setObjectName(QString::fromUtf8("RecTextEdit"));
        RecTextEdit->setGeometry(QRect(120, 170, 461, 151));
        RecTextEdit->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 170, 81, 21));
        QFont font4;
        font4.setPointSize(11);
        label_3->setFont(font4);
        ClearRecPushButton = new QPushButton(centralWidget);
        ClearRecPushButton->setObjectName(QString::fromUtf8("ClearRecPushButton"));
        ClearRecPushButton->setGeometry(QRect(610, 220, 81, 51));
        ClearRecPushButton->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 360, 81, 31));
        label_4->setFont(font4);
        SendPushButton = new QPushButton(centralWidget);
        SendPushButton->setObjectName(QString::fromUtf8("SendPushButton"));
        SendPushButton->setGeometry(QRect(610, 350, 71, 31));
        SendPushButton->setFont(font4);
        SendPushButton->setStyleSheet(QString::fromUtf8(""));
        ClearSendPushButton = new QPushButton(centralWidget);
        ClearSendPushButton->setObjectName(QString::fromUtf8("ClearSendPushButton"));
        ClearSendPushButton->setGeometry(QRect(610, 390, 71, 31));
        ClearSendPushButton->setFont(font4);
        ClearSendPushButton->setStyleSheet(QString::fromUtf8(""));
        SendLineEdit = new QLineEdit(centralWidget);
        SendLineEdit->setObjectName(QString::fromUtf8("SendLineEdit"));
        SendLineEdit->setGeometry(QRect(120, 360, 461, 41));
        SendLineEdit->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        IPLineEdit->setText(QApplication::translate("MainWindow", "192.168.1.6", 0, QApplication::UnicodeUTF8));
        PortLineEdit->setText(QApplication::translate("MainWindow", "2100", 0, QApplication::UnicodeUTF8));
        ConnPushButton->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Port\347\253\257\345\217\243\345\217\267:", 0, QApplication::UnicodeUTF8));
        RecTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\346\216\245\345\217\227\346\225\260\346\215\256\357\274\232", 0, QApplication::UnicodeUTF8));
        ClearRecPushButton->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", 0, QApplication::UnicodeUTF8));
        SendPushButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        ClearSendPushButton->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        SendLineEdit->setText(QApplication::translate("MainWindow", "123456", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
