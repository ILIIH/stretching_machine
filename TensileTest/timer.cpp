#include "timer.h"
#include <QDebug>

Timer::Timer()
{

}

Timer::~Timer()
{

}

void Timer::start()
{
    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &Timer::signal);
    timer->start(frequancy);
}

void Timer::signal()
{
    emit process();
}

void Timer::stop()
{
    qDebug () << "before";
    timer->stop();
    qDebug () << "after";
    emit finished();
}

void Timer::setFrequancy(int frequancy)
{
    this->frequancy = frequancy;
}
