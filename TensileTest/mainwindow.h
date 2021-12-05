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

    //to determ whether we recieve existing or realtime data
    void on_radioNew_clicked();

    void on_radioExisting_clicked();

    void clockDraw(); //function for drawing the graph

    void clockSerials();    //function for recieving the data

    void clockExistingData();   //function for drawing from db

    void on_stopDB_clicked();   //function for stoping all QTimers

    void on_clickTheSettings_triggered();   //follow the settings

private:
    Ui::MainWindow *ui;

    //widgets
    Settings* setting;

    //graphic and ports
    graphic Graphic;
    SerialPorts Force, Length, VFD; //Vera. Обязательно используй setName, addPort и portOpen для VFD
    QList<QString> portList, usedPorts; //Vera. Используй эти массивы для свободных и активных ком портов, а после обновляй comboBox (comLForce, comLLength)

    /*

    Vera

    ПРИМЕР обновления comboBox при подключении VFD:

        QString name = ui->comboBox->currentText();

        portList.removeOne(name);
        usedPorts.append(name);

        comBox();

    ПРИМЕР отключения VFD:

        usedPorts.removeOne(VFD.getName());
        portList.append(VFD.getName());

        comBox();

    */

    //Threads
    ThreadedTimer* timerDraw = new ThreadedTimer;
    ThreadedTimer* timerSerials = new ThreadedTimer;

    //Timers
    QTimer* graphFromDB;

    //Others
    int indexLastExperiment;
    double drawingTime;
    const double lengthSample = 0;
    double x = 0;

    /*
        Nikita 4

        class for db

    */
};
#endif // MAINWINDOW_H
