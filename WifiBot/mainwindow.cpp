#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpSocket = new connexionTcp();

    //flux vidéo de la caméra :
    streamView = new QWebEngineView();
    ui->gridLayout_4->addWidget(streamView);
    streamView->load(QUrl("http://192.168.1.106:8080/?action=stream"));
    streamView->show();


    //Signals :
    connect(ui->ButtonRobotUp, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotDown, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotLeft, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotRight, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotLeftUp, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotRightUp, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotLeftDown, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobotRightDown, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(ui->ButtonRobot360, SIGNAL(released()), this, SLOT (releaseButton()));
    connect(tcpSocket, SIGNAL(CapteursValues(Capteurs)), this, SLOT(updateCapteursValues(Capteurs)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tcpSocket;
}

void MainWindow::on_coButton_clicked(){
    bool ok;
    if(ui->coButton->text() == "Connect"){
        tcpSocket->connectTo(ui->hostEdit->text(), ui->portEdit->text().toInt(&ok, 10));
        ui->coButton->setText("Disconnect");
    } else{
        tcpSocket->disconnect();
        ui->coButton->setText("Connect");
    }
}

void MainWindow::on_ButtonRobotUp_pressed(){
    tcpSocket->MouvementRobot("Up", ui->velocity->value());
    std::cout << "[Info] Robot go forward." << std::endl;
}

void MainWindow::on_ButtonRobotDown_pressed(){
    tcpSocket->MouvementRobot("Down", ui->velocity->value());
    std::cout << "[Info] Robot go backward." << std::endl;
}

void MainWindow::on_ButtonRobotLeft_pressed(){
    tcpSocket->MouvementRobot("Left", ui->velocity->value());
    std::cout << "[Info] Robot go to the left." << std::endl;
}

void MainWindow::on_ButtonRobotRight_pressed(){
    tcpSocket->MouvementRobot("Right", ui->velocity->value());
    std::cout << "[Info] Robot go to the right." << std::endl;
}

void MainWindow::on_ButtonRobotLeftUp_pressed(){
    tcpSocket->MouvementRobot("LeftUp", ui->velocity->value());
    std::cout << "[Info] Robot go forward left." << std::endl;
}

void MainWindow::on_ButtonRobotRightUp_pressed(){
    tcpSocket->MouvementRobot("RightUp", ui->velocity->value());
    std::cout << "[Info] Robot go forward right." << std::endl;
}

void MainWindow::on_ButtonRobotLeftDown_pressed(){
    tcpSocket->MouvementRobot("LeftDown", ui->velocity->value());
    std::cout << "[Info] Robot go to backward left." << std::endl;
}

void MainWindow::on_ButtonRobotRightDown_pressed(){
    tcpSocket->MouvementRobot("RightDown", ui->velocity->value());
    std::cout << "[Info] Robot go backward right." << std::endl;
}

void MainWindow::on_ButtonRobot360_pressed(){
    tcpSocket->MouvementRobot("360", ui->velocity->value());
    std::cout << "[Info] Robot turnaway." << std::endl;
}

void MainWindow::releaseButton(){
    tcpSocket->MouvementRobot("stop");
    std::cout << "[Info] Stop robot." << std::endl;
}


//gestion
void MainWindow::on_ButtonCamUp_clicked(){
    std::cout << "Camera robot up." << std::endl;
    QNetworkRequest request;
    QNetworkAccessManager* man = new QNetworkAccessManager();
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-200"));
    man->get(request);
    man=NULL ; free(man);
}

void MainWindow::on_ButtonCamDown_clicked(){
    std::cout << "Camera robot down." << std::endl;
    QNetworkRequest request;
    QNetworkAccessManager* man = new QNetworkAccessManager();
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=200"));
    man->get(request);
    man=NULL ; free(man);
}

void MainWindow::on_ButtonCamLeft_clicked(){
    std::cout << "Camera robot left." << std::endl;
    QNetworkRequest request;
    QNetworkAccessManager* man = new QNetworkAccessManager();
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=200"));
    man->get(request);
    man=NULL ; free(man);
}

void MainWindow::on_ButtonCamRight_clicked(){
    std::cout << "Camera robot right." << std::endl;
    QNetworkRequest request;
    QNetworkAccessManager* man = new QNetworkAccessManager();
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-200"));
    man->get(request);
    man=NULL ; free(man);
}


void MainWindow::on_ButtonCamResetY_clicked(){
    std::cout << "Camera robot reset sur l'axe x." << std::endl;
    QNetworkRequest request;
    QNetworkAccessManager* man = new QNetworkAccessManager();
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094854&group=1&value=1"));
    man->get(request);
    man=NULL ; free(man);
}






//gestion clavier des déplacement du robot
void MainWindow::keyPressEvent(QKeyEvent *ev){
    switch(ev->key()){
    case Qt::Key_Z:
        tcpSocket->MouvementRobot("Up", ui->velocity->value());
        std::cout << "[Info] Robot go forward." << std::endl;
        break;
    case Qt::Key_S:
        tcpSocket->MouvementRobot("Down", ui->velocity->value());
        std::cout << "[Info] Robot go backward." << std::endl;
        break;
    case Qt::Key_Q:
        tcpSocket->MouvementRobot("Left", ui->velocity->value());
        std::cout << "[Info] Robot go to the left." << std::endl;
        break;
    case Qt::Key_D:
        tcpSocket->MouvementRobot("Right", ui->velocity->value());
        std::cout << "[Info] Robot go to the right." << std::endl;
        break;
    case Qt::Key_A:
        tcpSocket->MouvementRobot("LeftUp", ui->velocity->value());
        std::cout << "[Info] Robot go left forward." << std::endl;
        break;
    case Qt::Key_E:
        tcpSocket->MouvementRobot("RightUp", ui->velocity->value());
        std::cout << "[Info] Robot go right forward." << std::endl;
        break;
    case Qt::Key_W:
        tcpSocket->MouvementRobot("LeftDown", ui->velocity->value());
        std::cout << "[Info] Robot go left backward." << std::endl;
        break;
    case Qt::Key_C:
        tcpSocket->MouvementRobot("RightDown", ui->velocity->value());
        std::cout << "[Info] Robot go right backward." << std::endl;
        break;
    case Qt::Key_R:
        tcpSocket->MouvementRobot("360", ui->velocity->value());
        std::cout << "[Info] Robot go turnaway." << std::endl;
        break;
    }
}






//le robot s'arrete lorsqu'on n'appuis plus sur le bouton ou la touche
void MainWindow::keyReleaseEvent(QKeyEvent *ev){
    tcpSocket->MouvementRobot("stop");
    std::cout << "[Info] Stop robot." << std::endl;
}




//la valeur de velocity (vitesse) change quand on bouge la barre
void MainWindow::on_velocity_valueChanged(){
    ui->speedLCD->display(ui->velocity->value());
}





//on récupère des infos sur les capteurs
void MainWindow::updateCapteursValues(Capteurs s){
    ui->odoL->display(s.getOdoL());
    ui->odoR->display(s.getOdoR());
    ui->speedL->display(s.getSpeedL());
    ui->speedR->display(s.getSpeedR());

    if (s.getBattery() > 18.1 && s.getBattery() < 18.5){ //on concidère que la battery est entrain de charger entre 18,1 et 18,5V
        ui->battery->setValue(100);
        ui->battery->setStyleSheet(ui->battery->property("defaultStyleSheet").toString() + " QProgressBar::chunk { background: blue; }");
    }
    else {
        ui->battery->setValue(floor(((s.getBattery()-11.3)*100)/12.8));
        if(s.getBattery() > 11.3 && s.getBattery() < 12.1){
            ui->battery->setStyleSheet(ui->battery->property("defaultStyleSheet").toString() + " QProgressBar::chunk { background: red; }");        //on modifie aussi la couleur de la barre d'état de la batterie
        } else if(s.getBattery() > 12 && s.getBattery() < 12.5){
            ui->battery->setStyleSheet(ui->battery->property("defaultStyleSheet").toString() + " QProgressBar::chunk { background: orange; }");     //en fonction de sa charge
        } else if(s.getBattery() > 12.4 && s.getBattery() < 12,9){
            ui->battery->setStyleSheet(ui->battery->property("defaultStyleSheet").toString() + " QProgressBar::chunk { background: green; }");
        }
    }
}

