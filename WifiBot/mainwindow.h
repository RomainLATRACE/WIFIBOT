#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QKeyEvent>
#include <QTimer>
#include <QtWebEngineWidgets>

#include <connexionTcp.h>
#include <capteurs.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);//
    ~MainWindow();//


private slots:
    void on_coButton_clicked();//
    void on_ButtonRobotUp_pressed();//
    void on_ButtonRobotDown_pressed();//

    void on_ButtonRobotLeft_pressed();//
    void on_ButtonRobotRight_pressed();//
    void on_ButtonRobotLeftUp_pressed();//
    void on_ButtonRobotLeftDown_pressed();//
    void on_ButtonRobotRightUp_pressed();//
    void on_ButtonRobotRightDown_pressed();//
    void on_ButtonRobot360_pressed();//
    void releaseButton();//
    void on_velocity_valueChanged();//
    void on_ButtonCamUp_clicked();//
    void on_ButtonCamDown_clicked();//
    void on_ButtonCamLeft_clicked();//
    void on_ButtonCamRight_clicked();//
    void on_ButtonCamResetY_clicked();//
    void updateCapteursValues(Capteurs s);

private:
    Ui::MainWindow *ui;
    connexionTcp* tcpSocket;
    QWebEngineView* streamView;

    void keyPressEvent(QKeyEvent* ev);
    void keyReleaseEvent(QKeyEvent* ev);
};

#endif // MAINWINDOW_H
