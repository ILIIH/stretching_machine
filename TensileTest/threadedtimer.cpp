#include "threadedtimer.h"

ThreadedTimer::ThreadedTimer(QObject *parent) : QObject(parent)
{
    timer = new QTimer(nullptr);

    this->moveToThread(&thread);
    timer->moveToThread(&thread);
    QObject::connect(&thread, &QThread::finished, this, &QObject::deleteLater);
    QObject::connect(&thread, &QThread::finished, this, &ThreadedTimer::exit);
    thread.start();

    QObject::connect(timer, &QTimer::timeout, this, &ThreadedTimer::dataTimerFunction);
    QObject::connect(this, &ThreadedTimer::stopTimer, timer, &QTimer::stop, Qt::QueuedConnection);
    QObject::connect(this, &ThreadedTimer::startTimer, timer, static_cast<void (QTimer::*)(int)>(&QTimer::start), Qt::QueuedConnection);
}

ThreadedTimer::~ThreadedTimer()
{
    thread.quit();
    thread.wait();
}

void ThreadedTimer::dataTimerFunction()
{
    //qDebug() << "plot";
    emit signalForMainWindow();
}

void ThreadedTimer::exit()
{
    timer->stop();
    delete timer;
}
