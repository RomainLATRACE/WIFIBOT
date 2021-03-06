#ifndef CAPTEURS_H
#define CAPTEURS_H

#include <QtGlobal>

#define TICKPERMETER 5564.0f
#define BATTERYCURRENTRATIO 0.1f
#define ADCRATIO 3.3f/255

class Capteurs
{
public:
    Capteurs();
    Capteurs(quint32 odoL, quint32 odoR, qint16 speedL, qint16 speedR, quint8 battery, quint8 adc0, quint8 adc1, quint8 adc3, quint8 adc4, quint8 current, quint8 version);

    float getOdoL();
    float getOdoR();
    float getSpeedL();      //peut etre le mettre en unsigned
    float getSpeedR();      //peut etre le mettre en unsigned
    float getBattery();
    float getADC0();
    float getADC1();
    float getADC3();
    float getADC4();
    float getCurrent();
    quint8 getVersion();

private:
    float odoL,odoR;
    float speedL,speedR;
    float battery,adc0,adc1,adc3,adc4,current;
    quint8 version;
};

#endif // CAPTEURS_H
