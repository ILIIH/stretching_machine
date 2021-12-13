#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStringList>

class DBConnector
{
    QSqlDatabase db;
    QSqlQuery *query;
public:
    DBConnector(QWidget *parent);
    ~DBConnector();
    void insertData(int seriesNum, int experimentNum, double time, double F, double deltaL);
    void createSeries(int seriesNum, QString seriesName, QString material, int height, int width, int length, QStringList properties);
    void deleteSeries(int seriesNum);
    QSqlQuery getSeriesNames();
    bool hasSeries(QString name);
    int countSeries();
    QSqlQuery getData(int seriesNum, int experimentNum, double time);
    QSqlQuery getExperiments(int seriesNum);
};

#endif // DBCONNECTOR_H
