#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

    void on_addDot_clicked();

    void serialRecieve();

    void on_openBForce_clicked();

    void on_openBLength_clicked();

    void on_closeBForce_clicked();

    void on_closeBLength_clicked();

    void on_drawB_clicked();

    void on_radioNew_clicked();

    void on_radioExisting_clicked();

    void clockDraw();

    void clockSerials();

    void on_stopDB_clicked();

private:
    Ui::MainWindow *ui;

    graphic Graphic;
    SerialPorts Force, Length;
    QList<QString> portList, usedPorts;

    //Threads
    ThreadedTimer* timerDraw = new ThreadedTimer;
    ThreadedTimer* timerSerials = new ThreadedTimer;

    double x = 0;
};
#endif // MAINWINDOW_H
