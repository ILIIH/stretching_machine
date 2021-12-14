#include "graphic.h"

graphic::graphic()
{

}

graphic::graphic(QCustomPlot *Graphic)
{
    setQCustomPlot(Graphic);
}

graphic::~graphic()
{
    //delete plot;
    //delete Graphic;
}

void graphic::setQCustomPlot(QCustomPlot *Graphic)
{
    this->Graphic = Graphic;

    this->plot = new QCPCurve(this->Graphic->xAxis, this->Graphic->yAxis);

    this->plot->setPen(QPen(Qt::black));
    this->Graphic->setInteraction(QCP::iRangeDrag, true);
    this->Graphic->setInteraction(QCP::iRangeZoom, true);
    //this->Graphic->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    this->Graphic->axisRect()->setupFullAxesBox();
    this->Graphic->rescaleAxes();

    this->Graphic->xAxis->setLabel("Delta L");
    this->Graphic->yAxis->setLabel("Force");
}


void graphic::Add(double l, double f)
{
    QCPCurveData recentData = QCPCurveData(dotIndex++, l, f);
    //Dots.append(recentData);
    //plot->data()->set(Dots, true);

    plot->data()->add(recentData);
}

void graphic::Replot()
{
    Graphic->replot();
}

void graphic::clear()
{
    Graphic->clearPlottables();
    this->plot = new QCPCurve(this->Graphic->xAxis, this->Graphic->yAxis);
}
