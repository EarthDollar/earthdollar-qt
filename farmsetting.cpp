#include "farmsetting.h"
#include "ui_farmsetting.h"

FarmSetting::FarmSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FarmSetting)
{
    ui->setupUi(this);
    setModal(true);
}

FarmSetting::~FarmSetting()
{
   delete ui;
}

void FarmSetting::on_radioButton_mgpu_clicked()
{
    ui->spinBox_mgpu->setEnabled(true);
}

void FarmSetting::on_radioButton_gpu_clicked()
{
    ui->spinBox_mgpu->setEnabled(false);
}

void FarmSetting::on_radioButton_cpu_clicked()
{
    ui->spinBox_mgpu->setEnabled(false);
}

unsigned int FarmSetting::selection()
{
    if(ui->radioButton_cpu->isChecked()) return 1;
    if(ui->radioButton_gpu->isChecked()) return 2;
    if(ui->radioButton_mgpu->isChecked()) return 3;
    return 0;
}

unsigned int FarmSetting::totalGPU()
{
    return ui->spinBox_mgpu->value();
}
