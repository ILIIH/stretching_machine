#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <settings.h>
#include <QMainWindow>
#include <QThread>
#include <QMessageBox>

#include <graphic.h>

#include <serialports.h>

#include <threadedtimer.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void comBox();
    ~MainWindow();

private slots:

    void serialRecieve();

    //com ports
    void on_openBForce_clicked();

    void on_openBLength_clicked();

    void on_closeBForce_clicked();

    void on_closeBLength_clicked();

    void on_drawB_clicked();    //button for drawing

    //to determ whether existing or realtime date
    void on_radioNew_clicked();

    void on_radioExisting_clicked();

    void clockDraw(); //function for drawing the graph

    void clockSerials();    //function for recieving the date

    void on_stopDB_clicked();   //function for stoping all QTimers

    void on_clickTheSettings_triggered();   //follow the settings

private:
    Ui::MainWindow *ui;

    //widgets
    Settings* setting;

    //graphic and ports
    graphic Graphic;
    SerialPorts Force, Length;
    QList<QString> portList, usedPorts;

    //Threads
    ThreadedTimer* timerDraw = new ThreadedTimer;
    ThreadedTimer* timerSerials = new ThreadedTimer;

    //others
    const double lengthSample = 0;
};
#endif // MAINWINDOW_H
