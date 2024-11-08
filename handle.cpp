#include "handle.h"
#include "ui_handle.h"

Handle::Handle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Handle)
{
    ui->setupUi(this);

    this->setWindowTitle("看诊界面");
    ui->nameLabel->setVisible(false);
    ui->ageLabel->setVisible(false);
    ui->ganderLabel->setVisible(false);
}

Handle::~Handle()
{
    delete ui;
}

void Handle::on_searchButton_clicked()
{
    int id = ui->idEdit->text().toInt();
    patient = readPatient(id);
    if (patient.getName() == "empty")
    {
        QMessageBox::about(this, "", "没有找到目标患者");
        return;
    }
    if (patient.getStatus() != REGISTERED)
    {
        QMessageBox::about(this, "", "当前病人已看诊");
        return;
    }
    ui->nameLabel->setText(patient.getName());
    ui->ganderLabel->setText(patient.getGender());
    ui->ageLabel->setText(QString::number(patient.getAge()));
    ui->nameLabel->setVisible(true);
    ui->ganderLabel->setVisible(true);
    ui->ageLabel->setVisible(true);
}


void Handle::on_submitButton_clicked()
{
    if (patient.getName() == "empty")
    {
        QMessageBox::about(this, "", "请先查询患者信息");
        return;
    }
    QString text = ui->textEdit->toPlainText();
    if (text.compare("") == 0)
    {
        QMessageBox::about(this, "", "请输入诊断");
        return;
    }
    patient.setSymp(text);
    qDebug() << patient.getSymp();
    patient.setStatus(SEEN);
    if (!savePatient(patient))
    {
        qDebug() << "诊断后保存患者信息失败！";
        return;
    }
    QMessageBox::about(this, "", "保存成功");
    on_backButton_clicked();
}


void Handle::on_backButton_clicked()
{
    emit handleClose();
    this->close();
}

