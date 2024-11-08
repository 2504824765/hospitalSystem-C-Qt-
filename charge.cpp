#include "charge.h"
#include "ui_charge.h"

Charge::Charge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Charge)
{
    ui->setupUi(this);

    this->setWindowTitle("充值界面");
    ui->nameLabel->setVisible(false);
    ui->balanceLabel->setVisible(false);
    ui->costLabel->setVisible(false);
}

Charge::~Charge()
{
    delete ui;
}

void Charge::on_searchButton_clicked()
{
    int inputId = ui->idEdit->text().toInt();
    id = inputId;
    Patient patient = readPatient(id);
    if (patient.getName() == "empty")
    {
        QMessageBox::about(this, "", "没有查询到目标患者");
        return;
    }
    if (patient.getStatus() != SEEN)
    {
        QMessageBox::about(this, "", "请先进行看诊");
        return;
    }
    ui->nameLabel->setText(patient.getName());
    ui->nameLabel->setVisible(true);
    ui->balanceLabel->setText(QString::number(patient.getBalance()));
    ui->balanceLabel->setVisible(true);
    ui->costLabel->setText(QString::number(patient.getCosts()));
    ui->costLabel->setVisible(true);
}


void Charge::on_chargeButton_clicked()
{
    if (ui->nameLabel->text().compare("TextLabel") == 0 || id == -1)
    {
        QMessageBox::about(this, "", "请先查询患者信息");
        return;
    }
    double chargeAmount = ui->chargeEdit->text().toDouble();
    if (chargeAmount == 0)
    {
        QMessageBox::about(this, "", "请输入一个整数");
        return;
    }

    Patient patient = readPatient(id);
    if (patient.getName() == "empty")
    {
        QMessageBox::about(this, "", "没有查询到目标患者");
        return;
    }
    double totalBalance = patient.getBalance() + chargeAmount;
    if (totalBalance - patient.getCosts() >= 0)
    {
        totalBalance = totalBalance - patient.getCosts();
        patient.setCosts(0);
        ui->balanceLabel->setText(QString::number(totalBalance));
        ui->costLabel->setText(QString::number(patient.getCosts()));
    }
    //钱没有交完
    else
    {
        QMessageBox::about(this, "", "您充值的金额不够");
        return;
    }

    patient.setStatus(PRESCRIBED);
    patient.setBalance(totalBalance);
    if (savePatient(patient))
        qDebug() << "充值后保存成功";
    else
    {
        qDebug() << "充值后保存失败！";
        return;
    }
    QMessageBox::about(this, "", "缴费成功，请离开医院");
    on_backButton_clicked();
}


void Charge::on_backButton_clicked()
{
    emit chargeClose();
    this->close();
}

