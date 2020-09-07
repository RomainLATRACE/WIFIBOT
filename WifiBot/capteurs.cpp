#include "capteurs.h"

Capteurs::Capteurs()
{

}

Capteurs::Capteurs(quint32 odoL, quint32 odoR, qint16 speedL, qint16 speedR, quint8 battery, quint8 adc0, quint8 adc1, quint8 adc3, quint8 adc4, quint8 current, quint8 version)
{
    float tickper = 100.0f;

    this->odoL = ((float) odoL)/TICKPERMETER;
    this->odoR = ((float) odoR)/TICKPERMETER;

    this->speedL = ((float) speedL)*tickper/TICKPERMETER;
    this->speedR = ((float) speedR)*tickper/TICKPERMETER;

    this->battery = (float) battery*BATTERYCURRENTRATIO;
    this->adc0 = (float) adc0*ADCRATIO;
    this->adc1 = (float) adc1*ADCRATIO;
    this->adc3 = (float) adc3*ADCRATIO;
    this->adc4 = (float) adc4*ADCRATIO;

    this->current = (float) current*BATTERYCURRENTRATIO;
    this->version = version;
}

//odométrie
float Capteurs::getOdoL()
{
    return this->odoL;
}

float Capteurs::getOdoR()
{
    return this->odoR;
}

//vitesse roues
float Capteurs::getSpeedL()
{
    return this->speedL;
}

float Capteurs::getSpeedR()
{
    return this->speedR;
}

//etat batterie
float Capteurs::getBattery()
{
    return this->battery;
}

float Capteurs::getADC0()
{
    return this->adc0;
}
float Capteurs::getADC1()
{
    return this->adc1;
}
float Capteurs::getADC3()
{
    return this->adc3;
}
float Capteurs::getADC4()
{
    return this->adc4;
}

float Capteurs::getCurrent()
{
    return this->current;
}

quint8 Capteurs::getVersion()
{
    return this->version;
}
