#ifndef THREAD_H
#define THREAD_H

#include <QObject>
#include <QTimer>

class Timer : public QObject
{
    Q_OBJECT
    int frequancy;
    QTimer* timer;
public:
    Timer();
    ~Timer();
    void stop();
    void setFrequancy(int frequancy);

public slots:
    void start();
    void signal();

signals:
    void finished();
    void process();

};

#endif // THREAD_H
