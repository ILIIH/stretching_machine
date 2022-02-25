#include "vfd2.h"

VFD2::VFD2()
{
   // connect(getPort(), &QSerialPort::readyRead, this, &VFD2::readAnswer );
    //???????????????????
}

VFD2::~VFD2()
{
    portClose();
}

void VFD2::portSettings()
{
    //??????????????
    getPort()->setBaudRate(QSerialPort::Baud9600);
    getPort()->setDataBits(QSerialPort::Data7);
    getPort()->setParity(QSerialPort::NoParity);
    getPort()->setStopBits(QSerialPort::TwoStop);
    getPort()->setFlowControl(QSerialPort::NoFlowControl);
}

void VFD2::addPort()
{
    getPort()->setPortName(getName());
    portSettings();

}

int VFD2::lrcCount(QByteArray arr)
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

void VFD2::readAnswer()
{
    QByteArray buffer = getPort()->readAll();
    qDebug()<<"prischlo  "<<buffer;
}

void VFD2::run()
{
    getPort()->write(":010620000002D7\r\n");
}

void VFD2::stop()
{
    getPort()->write(":010620000001D8\r\n");
}

void VFD2::setFrequency(float frq)
{
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
    getPort()->write(msg);

    qDebug()<< msg;
}


void VFD2::forward()
{
    msg=":010620000010\r\n";

    msg.insert(msg.size()-2, QByteArray::number(lrcCount(msg), 16).toUpper());

    getPort()->write(msg);
}

void VFD2::reverse()
{
    msg=":010620000020\r\n";

    msg.insert(msg.size()-2, QByteArray::number(lrcCount(msg), 16).toUpper());

    getPort()->write(msg);
}
