#ifndef SERIALPORTS_H
#define SERIALPORTS_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class SerialPorts : public QObject
{
    Q_OBJECT
    QString name;
    QSerialPort *serial;
    bool conection = false;
public:
    SerialPorts();
    SerialPorts(QString);
    ~SerialPorts();

    void addPort();
    void portSettings();
    void setName(QString);
    void changePort(QString);
    void portOpen();
    void portClose();
    void writeData(QString);
    void switchConection();
    bool getConection();
    QString getName();

public slots:
    void run(); // Метод с полезной нагрузкой, который может выполняться в цикле

signals:
   // void finished();    // Сигнал, по которому будем завершать поток, после завершения метода run
  //  void runningChanged(bool running);
    void recievedData(QString);

};

#endif // SERIALPORTS_H
