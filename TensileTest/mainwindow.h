#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <graphic.h>

#include <serialports.h>

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

private:
    Ui::MainWindow *ui;

    graphic Graphic;
    SerialPorts Force, Length;
    QList<QString> portList, usedPorts;
};
#endif // MAINWINDOW_H
