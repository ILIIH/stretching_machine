#ifndef VFD2_H
#define VFD2_H

#include "serialports.h"

class VFD2 : public SerialPorts
{
    Q_OBJECT
    QByteArray msg;
public:
    VFD2();
    ~VFD2();

    void portSettings();
    void addPort();
    int lrcCount(QByteArray);
    void readAnswer();
    void run();
    void stop();
    void setFrequency(float frq);
//    void setName(QString);
//    QString getName();
  //  void open();  //vmesto etogo portOpen

public slots:
    void forward();
    void reverse();

};

#endif // VFD2_H
