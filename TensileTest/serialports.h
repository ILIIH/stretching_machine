#ifndef SERIALPORTS_H
#define SERIALPORTS_H

#include <cmath>
#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class SerialPorts : public QObject
{
    Q_OBJECT
    QSerialPort *serial;

    QString name;
    bool conection = false;

    double lastResult = 0;
public:
    SerialPorts();
    SerialPorts(QString);
    ~SerialPorts();

    void addPort();
    void portSettings();
    //void portSettings(int a); // vfd - drugie port settings
    void setName(QString);
    void changePort(QString);
    void portOpen();
    void portClose();
    void writeData(QString);
    void switchConection();
    const bool getConection();
    const QString getName();

public slots:
    double getSeria(); // Метод с полезной нагрузкой, который может выполняться в цикле

signals:
   // void finished();    // Сигнал, по которому будем завершать поток, после завершения метода run
  //  void runningChanged(bool running);
    void recievedData(QString);

};

#endif // SERIALPORTS_H
