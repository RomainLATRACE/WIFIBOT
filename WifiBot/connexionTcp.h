#ifndef CONNEXIONTCP_H
#define CONNEXIONTCP_H

#include <QTcpSocket>
#include <QByteArray>
#include <iostream>
#include <QTimer>
#include <QThread>

#include <capteurs.h>

class connexionTcp : public QObject
{
Q_OBJECT

public:
    connexionTcp();
    ~connexionTcp();

    void connectTo(QString host, int port);
    void disconnect();

    void MouvementRobot(QString direction, int speed = 0);

    void sendEmptyFrame();

    quint16 crc16(QByteArray buffer);

    void getCapteurs();

private:
    QTcpSocket* socket;
    QTimer* timer;

private slots:
    void connexion();
    void disconnexion();
    void refreshConnexion();
    void handleError();

signals:
    void CapteursValues(Capteurs s);
};

#endif // CONNEXIONTCP_H
