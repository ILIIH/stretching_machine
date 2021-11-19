#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Tensile-Test");

    Graphic.setQCustomPlot(ui->wGraphic);

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort port;
        port.setPort(info);
        if(port.open(QIODevice::ReadWrite))
        {
            ui->comLForce->addItem(info.portName(), 0);
            ui->comLLength->addItem(info.portName(), 0);
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addDot_clicked()
{
    double l = ui->length->text().toDouble();
    double f = ui->force->text().toDouble();
    Graphic.Add(l, f);
}

void MainWindow::serialRecieve()
{

}

void MainWindow::on_openBForce_clicked()
{

}
