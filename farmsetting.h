#ifndef FARMSETTING_H
#define FARMSETTING_H

#include <QDialog>

namespace Ui {
class FarmSetting;
}

class FarmSetting : public QDialog
{
    Q_OBJECT

public:
    explicit FarmSetting(QWidget *parent = 0);
    ~FarmSetting();

    unsigned int selection();
    unsigned int totalGPU();

private slots:
    void on_radioButton_mgpu_clicked();
    void on_radioButton_gpu_clicked();
    void on_radioButton_cpu_clicked();

private:
    Ui::FarmSetting *ui;
};

#endif // FARMSETTING_H
