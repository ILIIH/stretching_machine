#include "vfd.h"

vfd::vfd()
{
    port = new QSerialPort(this);
    portSettings();
   // port->open(QIODevice::ReadWrite);
    connect(port, &QSerialPort::readyRead, this, &vfd::readAnswer );



    //: slaveadress kodfunc dannye lrc \r\n


    //slaveadress -- my vsegda connect k 01(skoree vsego)

    //kodfunc -- 03-chtenie
    //kodfunc -- 06-zapis v 1 registr
    //kodfunc -- 10-zapis v neskolko registrov

    //dannye -- po situazii
    // 02.12 chastota po comportu ???

    //lrc -- 0x100 - 0x(summa vseh ascii simvolov)

}

vfd::~vfd()
{
    port->close();
}

void vfd::portSettings()
{
    port->setBaudRate(QSerialPort::Baud9600);
    port->setDataBits(QSerialPort::Data7);
    port->setParity(QSerialPort::NoParity);
    port->setStopBits(QSerialPort::TwoStop);
    port->setFlowControl(QSerialPort::NoFlowControl);
}

int vfd::lrcCount(QByteArray arr)
{
    int sum=0;
    bool ok;
    arr=arr.mid(1,arr.size()-3);
    while(arr.size()!=0)
    {
        sum+= arr.left(2).toInt(&ok, 16);
        arr.remove(0,2);
    }

    sum=256-sum;
    if (sum<0)                                 //mogut byt` problemki
            sum = sum+256;                   //iz-za "dopolnitelnogo koda"

    return sum;
}

void vfd::readAnswer()
{
    QByteArray buffer = port->readAll();
    qDebug()<<"prischlo  "<<buffer;
}

void vfd::forward()
{
   // msg=":010620000030\r\n";
    msg=":010620000010\r\n";

    msg.insert(msg.size()-2, QByteArray::number(lrcCount(msg), 16).toUpper());

    port->write(msg);
}

void vfd::reverse()
{
   // msg=":010620000030\r\n";
    msg=":010620000020\r\n";

    msg.insert(msg.size()-2, QByteArray::number(lrcCount(msg), 16).toUpper());

    port->write(msg);
}

void vfd::run()
{
    msg=":010620000002D7\r\n";
//    if(port->isOpen())
//        qDebug()<<"3333333";

    port->write(msg);
    // qDebug()<<"3333333";
}

void vfd::stop()
{
    msg=":010620000001D8\r\n";
    port->write(msg);
}

void vfd::setFrequency(float frq)
{
    //port->waitForBytesWritten(100);

    msg=":";

    //zapisali slave, func i adres
    msg.push_back("01062001");

    int ifrq=frq*100;

    QByteArray data(QByteArray::number(ifrq, 16).toUpper());    //cheknut
    //QByteArray data(QByteArray::number(frq, 10));

    while(data.size()%4!=0)
        data.insert(0, "0");
    msg.push_back(data);

    msg.push_back("\r\n");

    msg.insert(msg.size()-2, QByteArray::number(lrcCount(msg), 16).toUpper());
    port->write(msg);

    qDebug()<< msg;
     qDebug()<<"444444";

}

void vfd::setName(QString name)
{
    port->setPortName(name);
}

QString vfd::getName()
{
    return port->portName();
}

void vfd::open()
{
    port->open(QIODevice::ReadWrite);
}






