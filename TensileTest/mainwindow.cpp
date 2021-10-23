#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Graphic.setQCustomPlot(ui->wGraphic);
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
