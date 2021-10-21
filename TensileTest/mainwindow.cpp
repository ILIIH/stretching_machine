#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init
    Graphic = ui->wGraphic;

    //init plot
    plot = new QCPCurve(Graphic->xAxis, Graphic->yAxis);
    Dots.append(QCPCurveData(dotIndex++, 1, 1));
    Dots.append(QCPCurveData(dotIndex++, 3, 2));
    Dots.append(QCPCurveData(dotIndex++, 2, 3));
    plot->data()->set(Dots, true);

    plot->setPen(QPen(Qt::black));

    Graphic->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    Graphic->axisRect()->setupFullAxesBox();
    Graphic->rescaleAxes();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dots.append(QCPCurveData(dotIndex++, ui->lineEdit->text().toDouble(), ui->lineEdit_2->text().toDouble()));
    plot->data()->set(Dots, true);
}
