#include "serialports.h"

SerialPorts::SerialPorts()
{
    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &SerialPorts::run);
}

SerialPorts::~SerialPorts()
{
    serial->close();
}

void SerialPorts::addPort(QString name)
{
    serial->setPortName(name);
    portSettings();
}

void SerialPorts::portSettings()
{
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
}

void SerialPorts::changeName(QString name)
{
    serial->setPortName(name);
}

void SerialPorts::portOpen()
{
    serial->open(QIODevice::ReadWrite);
}

void SerialPorts::portClose()
{
    serial->close();
}

void SerialPorts::writeData(QString row)
{
    //serial->write(row, Q_INT64_C());
}

void SerialPorts::run()
{
    QString ba1;
    ba1 = serial->readAll();
    ba1 = ba1.mid(1, 7);

    emit recievedData(ba1);
}


