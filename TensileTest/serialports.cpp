#include "serialports.h"

SerialPorts::SerialPorts()
{
    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &SerialPorts::run);
}

SerialPorts::SerialPorts(QString name)
{
    this->name = name;
    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &SerialPorts::run);
}

SerialPorts::~SerialPorts()
{
    serial->close();
}

void SerialPorts::addPort()
{
    serial->setPortName(this->name);
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

void SerialPorts::setName(QString name, int index)
{
    this->name = name;
    this->index = index;
}

void SerialPorts::changePort(QString name, int index)
{
    setName(name, index);
    serial->setPortName(this->name);
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

void SerialPorts::switchConection()
{
    conection = !conection;
}

const bool SerialPorts::getConection()
{
    return conection;
}

const QString SerialPorts::getName()
{
    return name;
}

const int SerialPorts::getIndex()
{
    return index;
}

void SerialPorts::run()
{
    QString ba1;
    ba1 = serial->readAll();
    ba1 = ba1.mid(1, 7);

    emit recievedData(ba1);
}


