/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServer
{
public:
    QWidget *centralwidget;
    QToolButton *closeButton;
    QToolButton *hideButton;
    QLineEdit *label;
    QPushButton *startBtn;

    void setupUi(QMainWindow *TcpServer)
    {
        if (TcpServer->objectName().isEmpty())
            TcpServer->setObjectName(QString::fromUtf8("TcpServer"));
        TcpServer->resize(286, 244);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/serverBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        TcpServer->setWindowIcon(icon);
        TcpServer->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background:url(:/image/serveImg.png);\n"
"	background-repeat:no-repeat;\n"
"}"));
        centralwidget = new QWidget(TcpServer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        closeButton = new QToolButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(250, 0, 30, 30));
        closeButton->setMinimumSize(QSize(30, 30));
        closeButton->setMaximumSize(QSize(30, 30));
        closeButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: 0; border-radius: 5px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(23, 90, 167);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icon_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        hideButton = new QToolButton(centralwidget);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));
        hideButton->setGeometry(QRect(220, 0, 30, 30));
        hideButton->setMinimumSize(QSize(30, 30));
        hideButton->setMaximumSize(QSize(30, 30));
        hideButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: 0; border-radius: 5px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color:rgb(23, 90, 167);}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icon_hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideButton->setIcon(icon2);
        label = new QLineEdit(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 150, 231, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"background-color: rgb(150, 202, 255); border-radius: 3px;\n"
"}\n"
"QLineEdit:hover { \n"
"background-color: rgb(23, 90, 167);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label->setReadOnly(true);
        startBtn = new QPushButton(centralwidget);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setGeometry(QRect(10, 110, 231, 25));
        startBtn->setMinimumSize(QSize(60, 25));
        startBtn->setMaximumSize(QSize(400, 400));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font1.setPointSize(13);
        startBtn->setFont(font1);
        startBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-radius: 10px;\n"
"\n"
"background-color: rgb(150, 202, 255);\n"
"}\n"
"QPushButton:hover { \n"
"background-color: rgb(23, 90, 167);\n"
"}\n"
"\n"
"\n"
""));
        TcpServer->setCentralWidget(centralwidget);

        retranslateUi(TcpServer);

        QMetaObject::connectSlotsByName(TcpServer);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServer)
    {
        TcpServer->setWindowTitle(QCoreApplication::translate("TcpServer", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("TcpServer", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("TcpServer", "...", nullptr));
#if QT_CONFIG(tooltip)
        hideButton->setToolTip(QCoreApplication::translate("TcpServer", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        hideButton->setText(QCoreApplication::translate("TcpServer", "...", nullptr));
        label->setText(QCoreApplication::translate("TcpServer", "  IP:", nullptr));
        startBtn->setText(QCoreApplication::translate("TcpServer", "\347\202\271\345\207\273\345\274\200\345\220\257\346\234\215\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServer: public Ui_TcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
