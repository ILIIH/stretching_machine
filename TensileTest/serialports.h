#ifndef SERIALPORTS_H
#define SERIALPORTS_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class SerialPorts : public QObject
{
    Q_OBJECT

    QSerialPort *serial;

public:
    SerialPorts();
    ~SerialPorts();

    void addPort(QString);
    void portSettings();
    void changeName(QString);
    void portOpen();
    void portClose();
    void writeData(QString);

public slots:
    void run(); // Метод с полезной нагрузкой, который может выполняться в цикле

signals:
   // void finished();    // Сигнал, по которому будем завершать поток, после завершения метода run
  //  void runningChanged(bool running);
    void recievedData(QString);

};

#endif // SERIALPORTS_H
