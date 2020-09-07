/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *hostEdit_;
    QLineEdit *hostEdit;
    QLabel *portEdit_;
    QLineEdit *portEdit;
    QPushButton *coButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFrame *frame_5;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLCDNumber *speedL;
    QLCDNumber *speedR;
    QLCDNumber *odoL;
    QLCDNumber *odoR;
    QLabel *speedL_;
    QLabel *speedL_1;
    QLabel *speedL_5;
    QLabel *speedL_6;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_5;
    QPushButton *ButtonCamRight;
    QPushButton *ButtonCamUp;
    QPushButton *ButtonCamLeft;
    QPushButton *ButtonCamDown;
    QPushButton *ButtonCamResetX;
    QPushButton *ButtonCamResetY;
    QFrame *frame_3;
    QTextEdit *textEdit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QPushButton *ButtonRobotDown;
    QPushButton *ButtonRobot360;
    QPushButton *ButtonRobotLeft;
    QPushButton *ButtonRobotRightDown;
    QPushButton *ButtonRobotLeftUp;
    QPushButton *ButtonRobotLeftDown;
    QPushButton *ButtonRobotRightUp;
    QPushButton *ButtonRobotUp;
    QPushButton *ButtonRobotRight;
    QTextEdit *textEdit_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *speed_;
    QSlider *velocity;
    QLCDNumber *speedLCD;
    QLabel *val;
    QFrame *frame_4;
    QTextEdit *textEdit_2;
    QProgressBar *battery;
    QLabel *battery_;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1254, 886);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(10, 10, 1071, 721));
        frame->setCursor(QCursor(Qt::WhatsThisCursor));
        frame->setMouseTracking(true);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1051, 71));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalFrame = new QFrame(frame_2);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(80, 10, 931, 31));
        horizontalFrame->setStyleSheet(QStringLiteral("background: rgb(219, 222, 222);"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 2, 5, 2);
        hostEdit_ = new QLabel(horizontalFrame);
        hostEdit_->setObjectName(QStringLiteral("hostEdit_"));
        hostEdit_->setStyleSheet(QStringLiteral("font: 25 italic 13pt \"Helvetica\";"));

        horizontalLayout->addWidget(hostEdit_);

        hostEdit = new QLineEdit(horizontalFrame);
        hostEdit->setObjectName(QStringLiteral("hostEdit"));
        hostEdit->setStyleSheet(QStringLiteral("background: white;"));

        horizontalLayout->addWidget(hostEdit);

        portEdit_ = new QLabel(horizontalFrame);
        portEdit_->setObjectName(QStringLiteral("portEdit_"));
        portEdit_->setStyleSheet(QStringLiteral("font: 25 italic 13pt \"Helvetica\";"));

        horizontalLayout->addWidget(portEdit_);

        portEdit = new QLineEdit(horizontalFrame);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setStyleSheet(QStringLiteral("background: white;"));

        horizontalLayout->addWidget(portEdit);

        coButton = new QPushButton(horizontalFrame);
        coButton->setObjectName(QStringLiteral("coButton"));
        coButton->setStyleSheet(QStringLiteral("background: white;"));

        horizontalLayout->addWidget(coButton);

        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 1051, 621));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(layoutWidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        textEdit_3 = new QTextEdit(frame_5);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 10, 321, 51));
        textEdit_4 = new QTextEdit(frame_5);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(10, 320, 321, 41));
        speedL = new QLCDNumber(frame_5);
        speedL->setObjectName(QStringLiteral("speedL"));
        speedL->setGeometry(QRect(20, 410, 141, 51));
        speedL->setStyleSheet(QLatin1String("border: 1px solid rgb(183, 186, 186);\n"
"background: rgb(244, 247, 247);"));
        speedR = new QLCDNumber(frame_5);
        speedR->setObjectName(QStringLiteral("speedR"));
        speedR->setGeometry(QRect(180, 410, 141, 51));
        speedR->setStyleSheet(QLatin1String("border: 1px solid rgb(183, 186, 186);\n"
"background: rgb(244, 247, 247);"));
        odoL = new QLCDNumber(frame_5);
        odoL->setObjectName(QStringLiteral("odoL"));
        odoL->setGeometry(QRect(20, 540, 141, 51));
        odoL->setStyleSheet(QLatin1String("border: 1px solid rgb(183, 186, 186);\n"
"background: rgb(244, 247, 247);"));
        odoR = new QLCDNumber(frame_5);
        odoR->setObjectName(QStringLiteral("odoR"));
        odoR->setGeometry(QRect(180, 540, 141, 51));
        odoR->setStyleSheet(QLatin1String("border: 1px solid rgb(183, 186, 186);\n"
"background: rgb(244, 247, 247);"));
        speedL_ = new QLabel(frame_5);
        speedL_->setObjectName(QStringLiteral("speedL_"));
        speedL_->setGeometry(QRect(50, 370, 91, 41));
        speedL_->setStyleSheet(QLatin1String("border: none;\n"
"font: 25 13pt \"Helvetica\";"));
        speedL_1 = new QLabel(frame_5);
        speedL_1->setObjectName(QStringLiteral("speedL_1"));
        speedL_1->setGeometry(QRect(200, 370, 91, 41));
        speedL_1->setStyleSheet(QLatin1String("border: none;\n"
"font: 25 13pt \"Helvetica\";"));
        speedL_5 = new QLabel(frame_5);
        speedL_5->setObjectName(QStringLiteral("speedL_5"));
        speedL_5->setGeometry(QRect(40, 500, 101, 41));
        speedL_5->setStyleSheet(QLatin1String("border: none;\n"
"font: 25 13pt \"Helvetica\";"));
        speedL_6 = new QLabel(frame_5);
        speedL_6->setObjectName(QStringLiteral("speedL_6"));
        speedL_6->setGeometry(QRect(200, 500, 91, 41));
        speedL_6->setStyleSheet(QLatin1String("border: none;\n"
"font: 25 13pt \"Helvetica\";"));
        layoutWidget_2 = new QWidget(frame_5);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 60, 341, 267));
        gridLayout_5 = new QGridLayout(layoutWidget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        ButtonCamRight = new QPushButton(layoutWidget_2);
        ButtonCamRight->setObjectName(QStringLiteral("ButtonCamRight"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ImageWifibot/ImageCamDroite.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCamRight->setIcon(icon);
        ButtonCamRight->setIconSize(QSize(56, 54));
        ButtonCamRight->setFlat(true);

        gridLayout_5->addWidget(ButtonCamRight, 1, 2, 1, 1);

        ButtonCamUp = new QPushButton(layoutWidget_2);
        ButtonCamUp->setObjectName(QStringLiteral("ButtonCamUp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ImageWifibot/ImageCamHaut.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCamUp->setIcon(icon1);
        ButtonCamUp->setIconSize(QSize(56, 54));
        ButtonCamUp->setFlat(true);

        gridLayout_5->addWidget(ButtonCamUp, 0, 1, 1, 1);

        ButtonCamLeft = new QPushButton(layoutWidget_2);
        ButtonCamLeft->setObjectName(QStringLiteral("ButtonCamLeft"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ImageWifibot/ImageCamGauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCamLeft->setIcon(icon2);
        ButtonCamLeft->setIconSize(QSize(56, 54));
        ButtonCamLeft->setFlat(true);

        gridLayout_5->addWidget(ButtonCamLeft, 1, 0, 1, 1);

        ButtonCamDown = new QPushButton(layoutWidget_2);
        ButtonCamDown->setObjectName(QStringLiteral("ButtonCamDown"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ImageWifibot/ImageCamBas.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCamDown->setIcon(icon3);
        ButtonCamDown->setIconSize(QSize(56, 54));
        ButtonCamDown->setFlat(true);

        gridLayout_5->addWidget(ButtonCamDown, 2, 1, 1, 1);

        ButtonCamResetX = new QPushButton(layoutWidget_2);
        ButtonCamResetX->setObjectName(QStringLiteral("ButtonCamResetX"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ImageWifibot/ImageResetCam.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCamResetX->setIcon(icon4);
        ButtonCamResetX->setIconSize(QSize(56, 54));
        ButtonCamResetX->setFlat(true);

        gridLayout_5->addWidget(ButtonCamResetX, 0, 0, 1, 1);

        ButtonCamResetY = new QPushButton(layoutWidget_2);
        ButtonCamResetY->setObjectName(QStringLiteral("ButtonCamResetY"));
        ButtonCamResetY->setIcon(icon4);
        ButtonCamResetY->setIconSize(QSize(56, 54));
        ButtonCamResetY->setFlat(true);

        gridLayout_5->addWidget(ButtonCamResetY, 2, 2, 1, 1);

        textEdit_3->raise();
        textEdit_4->raise();
        speedL->raise();
        speedR->raise();
        odoL->raise();
        odoR->raise();
        speedL_->raise();
        speedL_1->raise();
        speedL_5->raise();
        speedL_6->raise();
        layoutWidget_2->raise();

        gridLayout->addWidget(frame_5, 0, 2, 1, 1);

        frame_3 = new QFrame(layoutWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 321, 51));
        layoutWidget1 = new QWidget(frame_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 80, 336, 291));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ButtonRobotDown = new QPushButton(layoutWidget1);
        ButtonRobotDown->setObjectName(QStringLiteral("ButtonRobotDown"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheBas.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotDown->setIcon(icon5);
        ButtonRobotDown->setIconSize(QSize(56, 54));
        ButtonRobotDown->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotDown, 2, 1, 1, 1);

        ButtonRobot360 = new QPushButton(layoutWidget1);
        ButtonRobot360->setObjectName(QStringLiteral("ButtonRobot360"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ImageWifibot/Image360Robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobot360->setIcon(icon6);
        ButtonRobot360->setIconSize(QSize(56, 54));
        ButtonRobot360->setFlat(true);

        gridLayout_3->addWidget(ButtonRobot360, 1, 1, 1, 1);

        ButtonRobotLeft = new QPushButton(layoutWidget1);
        ButtonRobotLeft->setObjectName(QStringLiteral("ButtonRobotLeft"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheGauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotLeft->setIcon(icon7);
        ButtonRobotLeft->setIconSize(QSize(56, 54));
        ButtonRobotLeft->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotLeft, 1, 0, 1, 1);

        ButtonRobotRightDown = new QPushButton(layoutWidget1);
        ButtonRobotRightDown->setObjectName(QStringLiteral("ButtonRobotRightDown"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheBasDroite.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotRightDown->setIcon(icon8);
        ButtonRobotRightDown->setIconSize(QSize(56, 54));
        ButtonRobotRightDown->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotRightDown, 2, 2, 1, 1);

        ButtonRobotLeftUp = new QPushButton(layoutWidget1);
        ButtonRobotLeftUp->setObjectName(QStringLiteral("ButtonRobotLeftUp"));
        ButtonRobotLeftUp->setMinimumSize(QSize(71, 61));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheHautGauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotLeftUp->setIcon(icon9);
        ButtonRobotLeftUp->setIconSize(QSize(56, 54));
        ButtonRobotLeftUp->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotLeftUp, 0, 0, 1, 1);

        ButtonRobotLeftDown = new QPushButton(layoutWidget1);
        ButtonRobotLeftDown->setObjectName(QStringLiteral("ButtonRobotLeftDown"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheBasGauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotLeftDown->setIcon(icon10);
        ButtonRobotLeftDown->setIconSize(QSize(56, 54));
        ButtonRobotLeftDown->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotLeftDown, 2, 0, 1, 1);

        ButtonRobotRightUp = new QPushButton(layoutWidget1);
        ButtonRobotRightUp->setObjectName(QStringLiteral("ButtonRobotRightUp"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheHautDroite.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotRightUp->setIcon(icon11);
        ButtonRobotRightUp->setIconSize(QSize(56, 54));
        ButtonRobotRightUp->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotRightUp, 0, 2, 1, 1);

        ButtonRobotUp = new QPushButton(layoutWidget1);
        ButtonRobotUp->setObjectName(QStringLiteral("ButtonRobotUp"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheHaut.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotUp->setIcon(icon12);
        ButtonRobotUp->setIconSize(QSize(56, 54));
        ButtonRobotUp->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotUp, 0, 1, 1, 1);

        ButtonRobotRight = new QPushButton(layoutWidget1);
        ButtonRobotRight->setObjectName(QStringLiteral("ButtonRobotRight"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/ImageWifibot/ImageFlecheDroite.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonRobotRight->setIcon(icon13);
        ButtonRobotRight->setIconSize(QSize(56, 54));
        ButtonRobotRight->setFlat(true);

        gridLayout_3->addWidget(ButtonRobotRight, 1, 2, 1, 1);

        textEdit_6 = new QTextEdit(frame_3);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(10, 410, 321, 31));
        layoutWidget_3 = new QWidget(frame_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 460, 291, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        speed_ = new QLabel(layoutWidget_3);
        speed_->setObjectName(QStringLiteral("speed_"));
        speed_->setStyleSheet(QLatin1String("font: 25 13pt \"Helvetica\";\n"
"border: none;"));

        horizontalLayout_2->addWidget(speed_);

        velocity = new QSlider(layoutWidget_3);
        velocity->setObjectName(QStringLiteral("velocity"));
        velocity->setStyleSheet(QStringLiteral("border: none;"));
        velocity->setMaximum(100);
        velocity->setValue(75);
        velocity->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(velocity);

        speedLCD = new QLCDNumber(frame_3);
        speedLCD->setObjectName(QStringLiteral("speedLCD"));
        speedLCD->setGeometry(QRect(150, 550, 64, 49));
        speedLCD->setStyleSheet(QStringLiteral("border: none;"));
        speedLCD->setProperty("intValue", QVariant(75));
        val = new QLabel(frame_3);
        val->setObjectName(QStringLiteral("val"));
        val->setGeometry(QRect(38, 550, 121, 49));
        val->setStyleSheet(QLatin1String("font: 25 13pt \"Helvetica\";\n"
"border: none;"));

        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(layoutWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 10, 321, 51));
        battery = new QProgressBar(frame_4);
        battery->setObjectName(QStringLiteral("battery"));
        battery->setGeometry(QRect(140, 480, 187, 31));
        battery->setStyleSheet(QStringLiteral("border: 1px solid rgb(224, 224, 224);"));
        battery->setValue(0);
        battery_ = new QLabel(frame_4);
        battery_->setObjectName(QStringLiteral("battery_"));
        battery_->setGeometry(QRect(20, 480, 91, 31));
        battery_->setStyleSheet(QLatin1String("border: none;\n"
"font: 25 13pt \"Helvetica\";"));
        gridLayoutWidget = new QWidget(frame_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 100, 301, 251));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        textEdit_5 = new QTextEdit(frame_4);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(10, 410, 321, 31));

        gridLayout->addWidget(frame_4, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1254, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        hostEdit_->setText(QApplication::translate("MainWindow", "IP Address :", Q_NULLPTR));
        hostEdit->setText(QApplication::translate("MainWindow", "192.168.1.106", Q_NULLPTR));
        portEdit_->setText(QApplication::translate("MainWindow", "Port : ", Q_NULLPTR));
        portEdit->setText(QApplication::translate("MainWindow", "15020", Q_NULLPTR));
        coButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Controle De La Camera</span></p></body></html>", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Capteurs</span></p></body></html>", Q_NULLPTR));
        speedL_->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Vitesse Gauche</p></body></html>", Q_NULLPTR));
        speedL_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Vitesse Droite</p></body></html>", Q_NULLPTR));
        speedL_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Distance Gauche</p></body></html>", Q_NULLPTR));
        speedL_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Distance Droite</p></body></html>", Q_NULLPTR));
        ButtonCamRight->setText(QString());
        ButtonCamUp->setText(QString());
        ButtonCamLeft->setText(QString());
        ButtonCamDown->setText(QString());
        ButtonCamResetX->setText(QString());
        ButtonCamResetY->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Controle Du Robot</span></p></body></html>", Q_NULLPTR));
        ButtonRobotDown->setText(QString());
        ButtonRobot360->setText(QString());
        ButtonRobotLeft->setText(QString());
        ButtonRobotRightDown->setText(QString());
        ButtonRobotLeftUp->setText(QString());
        ButtonRobotLeftDown->setText(QString());
        ButtonRobotRightUp->setText(QString());
        ButtonRobotUp->setText(QString());
        ButtonRobotRight->setText(QString());
        textEdit_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">V\303\251locit\303\251</span></p></body></html>", Q_NULLPTR));
        speed_->setText(QApplication::translate("MainWindow", "Vitesse :", Q_NULLPTR));
        val->setText(QApplication::translate("MainWindow", "Valeur Num\303\251rique :", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Retour Camera</span></p></body></html>", Q_NULLPTR));
        battery_->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Batterie</p></body></html>", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Autonomie</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
