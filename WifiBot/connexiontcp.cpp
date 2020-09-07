#include "connexionTcp.h"

connexionTcp::connexionTcp()
{
    this->socket = new QTcpSocket();
    QObject::connect(this->socket, SIGNAL(connected()), this, SLOT(connexion()));
    QObject::connect(this->socket, SIGNAL(disconnected()), this, SLOT(disconnexion()));
    QObject::connect(this->socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(handleError()));
}

connexionTcp::~connexionTcp()
{
    delete socket;
}

void connexionTcp::connectTo(QString host, int port) //le port 15020 et ip du robot
{
    std::cout <<" Connexion en cours..." << std::endl;

    socket->abort(); // les connexions précédentes sont désactivées
    socket->connectToHost(host, port); // On se connecte au serveur (robot)
}

void connexionTcp::MouvementRobot(QString direction, int speed){
    QByteArray QBA; //création d'une trame où on va insérer les "char"

    //char1 : 255
    QBA.append((char)0xFF);
    //char2 : size
    QBA.append((char)0x07);

    QStringList directions; //liste contient tous les cas de directions
    directions << "Up" << "Down" << "Left" << "Right" << "LeftUp" << "RightUp" << "LeftDown" << "RightDown" << "360";
    switch(directions.indexOf(direction)){
        case 0 : //forward
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));   //speed en % (donc on a un % de la speed max)
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0xF0);
            break;
        case 1 : //backard
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0xA0);
            break;
        case 2 ://left, on braque
            //char3-4 : left speed
            QBA.append((char)0x00);
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)(int)((240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0xF0);
            break;
        case 3 ://droite, on braque
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)0x00);
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0xF0);
            break;
        case 4 ://Left forward
            //char3-4 : left speed
            QBA.append((char)((int)(100*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0x50);
            break;
        case 5 ://Right forward
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(100*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0x50);
            break;
        case 6 ://Left backward
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0x00);
            break;
        case 7 ://Right backward
            //char3-4 : left speed
            QBA.append((char)((int)(240*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)((int)(100*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0x00);
            break;
        case 8 ://Turnaway
            //char3-4 : left speed
            QBA.append((char)(int)((100*speed)/100));
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)(int)((240*speed)/100));
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0xB0);
            break;
        default :
            //char3-4 : left speed
            QBA.append((char)0x00);
            QBA.append((char)0x00);
            //char5-6 : right speed
            QBA.append((char)0x00);
            QBA.append((char)0x00);
            //char 7 : is the Left / Right speed command flag : Forward / Backward and speed control left & right ON/OFF.
            QBA.append((char)0x00);
    }


// On détermine le CRC
    quint16 ValeurCrc = crc16(QBA);

    QBA.append((char)(ValeurCrc));
    QBA.append((char)(ValeurCrc>>8));

    socket->write(QBA);
}


void connexionTcp::disconnect()
{
    MouvementRobot("stop");
    socket->disconnectFromHost();
}

void connexionTcp::connexion()
{
    std::cout << "Connexion établie :)." << std::endl;

    sendEmptyFrame();
    this->timer = new QTimer(this);
    connect(this->timer, SIGNAL(timeout()), this, SLOT(refreshConnexion()));
    timer->setSingleShot(false);
    timer->start(500);
}

void connexionTcp::disconnexion()
{
    std::cout << "[Info] Disconnect from host." << std::endl;
    timer->stop();
}

void connexionTcp::sendEmptyFrame()//on envoie une trame vide (utilisée pour ne pas perde la connexion)
{
    QByteArray trame;
    trame.append(255);
    this->socket->write(trame);
}

void connexionTcp::refreshConnexion()
{
    sendEmptyFrame();
    //getSensors();
}

void connexionTcp::handleError()
{
    std::cout << "Error Tcpconnection: " << socket->errorString().toStdString() << std::endl;
}






//fonction pour le calcul du CRC
quint16 connexionTcp::crc16(QByteArray buffer) {
    quint16 crc = 0xFFFF;
    quint16 polynome = 0xA001;
    unsigned int parity = 0;
    unsigned int cptBit;
    unsigned int cptOct;

    for (cptOct = 1; cptOct < 7; cptOct++){

        crc ^= (unsigned char) buffer.at(cptOct);

        for (cptBit = 0; cptBit <= 7 ; cptBit++){

            parity = crc;
            crc >>= 1;

            if (parity % 2 == true) crc ^= polynome;
        }
    }
    return crc;
}






//communication avec les capteurs
void connexionTcp::getCapteurs(){
    QByteArray QByAr = socket->readAll();

    if(QByAr.size() > 17)
    {
        quint32 odoL,odoR;
        qint16 speedL,speedR;
        quint8 battery,adc0,adc1,adc3,adc4,current,version;

        // Left
        speedL = QByAr.at(0)+(QByAr.at(1)<<8);
        battery = QByAr.at(2);
        adc4 = QByAr.at(3);
        adc3 = QByAr.at(4);
        odoL = QByAr.at(5)+(QByAr.at(6)<<8)+(QByAr.at(7)<<16)+(QByAr.at(8)<<24);

        // Right
        speedR = QByAr.at(9)+(QByAr.at(10)<<8);
        adc0 = QByAr.at(11);
        adc1 = QByAr.at(12);
        odoR = QByAr.at(13)+(QByAr.at(14)<<8)+(QByAr.at(15)<<16)+(QByAr.at(16)<<24);
        current = QByAr.at(17);
        version = QByAr.at(18);

        //On suppose que la batterie est déchargée à 11.3V et pleine à 12.8 et et si c'est au dessus, c'est parce qu'il recharge
        Capteurs s = Capteurs(odoL, odoR, speedL, speedR, battery, adc0, adc1, adc3, adc4, current, version);

        return CapteursValues(s);
    }
}

