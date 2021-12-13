#include "dbconnector.h"
#include <QDebug>
#include <QSqlError>

DBConnector::DBConnector()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\qt_projects\\stretching_machine\\TensileTest\\DataBase.db");

    if(db.open())
    {
        qDebug() << "ok";
        query = new QSqlQuery();
    }
}

DBConnector::~DBConnector()
{
    db.close();
    delete query;
    query = nullptr;
}

void DBConnector::insertData(int seriesNum, int experimentNum, double time, double F, double deltaL)
{
    QString queryText = "INSERT INTO experiment_data (series_num,experiment_num,time,F,delta_l) VALUES (";
    QStringList params = {QString::number(seriesNum), QString::number(experimentNum), QString::number(time), QString::number(F), QString::number(deltaL)};
    queryText.append(params.join(",") + ");");

    query->exec(queryText);
    qDebug() << query->lastError();

    query->clear();
}

void DBConnector::createSeries(int seriesNum, QString seriesName, QString material, int height, int width, int length, QStringList properties)
{
    QString queryText = "INSERT INTO experiment_info (series_num,series_name,height,width,material,length) VALUES (";
    QStringList params = {QString::number(seriesNum), "\"" + seriesName + "\"", QString::number(height), QString::number(width), "\"" + material + "\"", QString::number(length)};
    queryText.append(params.join(","));
    queryText.append(");");

    query->exec(queryText);
    qDebug() << query->lastError();

    query->clear();

    queryText = "CREATE TABLE ";
    queryText.append("series_" + QString::number(seriesNum) + "_info ");
    queryText.append("(\"experiment_num\"  INTEGER NOT NULL, ");
    queryText.append("\"" + properties.join("\" REAL NOT NULL,\"") + "\" REAL NOT NULL, ");
    queryText.append("PRIMARY KEY(\"experiment_num\"));");

    query->exec(queryText);
    qDebug() << query->lastError();

    query->clear();
}

void DBConnector::deleteSeries(int seriesNum)
{
    QString queryText = "DELETE FROM experiment_info WHERE series_num = ";
    queryText.append(QString::number(seriesNum));
    query->exec(queryText);
    query->clear();
}

QSqlQuery DBConnector::getSeriesNames()
{
    query->exec("SELECT series_name FROM experiment_info");
    qDebug() << query->lastError();

    return *query;
}

bool DBConnector::hasSeries(QString name)
{
    QString queryText = "SELECT series_num FROM  experiment_info WHERE series_name = ";
    queryText.append("\"" + name + "\"");

    query->exec(queryText);
    qDebug() << query->lastError();

    if(query->next())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DBConnector::countSeries()
{
    query->exec("SELECT COUNT(*) FROM  experiment_info");
    qDebug() << query->lastError();

    if(query->next())
    {
        return query->value(0).toInt();
    }
    else
    {
        return 0;
    }
}

QSqlQuery DBConnector::getData(int seriesNum, int experimentNum, double time)
{
    QString queryText = "SELECT F, delta_l FROM experiment_data WHERE series_num = ";
    queryText.append(QString::number(seriesNum) + " AND experiment_num = " + QString::number(experimentNum) + " AND time = " + QString::number(time));

    query->exec(queryText);

    return *query;
}
