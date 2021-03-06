#ifndef VFD_H
#define VFD_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class vfd: public QObject
{
     Q_OBJECT

public:
    vfd();
    ~vfd();

    void portSettings();
    int lrcCount(QByteArray);
    void readAnswer();
    void run();
    void stop();
    void setFrequency(float frq);
    void setName(QString);
    QString getName();
    void open();

public slots:
    void forward();
    void reverse();


private:
   // QSerialPort *port = new QSerialPort ("COM4");
    QSerialPort *port;
    QByteArray msg;

};

#endif // VFD_H
