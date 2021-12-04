#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

signals:
    void Open();  // Сигнал для первого окна на открытие

private slots:
    void on_MWindow_clicked();

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
