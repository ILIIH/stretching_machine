#ifndef THREADEDTIMER_H
#define THREADEDTIMER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include <QDebug>


class ThreadedTimer : public QObject
{
    Q_OBJECT
    public:
        explicit ThreadedTimer(QObject *parent = nullptr);
        ~ThreadedTimer();
    private:
        QThread thread;
        QTimer *timer;

    signals:
        void stopTimer();
        void startTimer(int msec);

    public slots:

        void dataTimerFunction();
        void exit();

    signals:
        void signalForMainWindow();
};

#endif // THREADEDTIMER_H
