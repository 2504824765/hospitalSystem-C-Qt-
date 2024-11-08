#include "drug.h"
#include "ui_drug.h"

Drug::Drug(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Drug)
{
    ui->setupUi(this);

    this->setWindowTitle("药房界面");
    totalCosts = 0;
    ui->costLabel->setText(QString::number(totalCosts));
    ui->nameLabel->setVisible(false);
    ui->drugEdit->setReadOnly(true);
}

Drug::~Drug()
{
    delete ui;
}

void Drug::on_backButton_clicked()
{
    emit drugClose();
    this->close();
}


void Drug::on_searchEdit_2_clicked()
{
    drugText = "";
    int inputId = ui->idEdit->text().toInt();
    patientId = inputId;
    qDebug() << "inputId:" << inputId;

    Patient patient = readPatient(inputId);
    drugs = patient.getDrugs();
    if (patient.getStatus() == ILLIGAL)
    {
        QMessageBox::about(this, "", "未找到目标患者");
        return;
    }
    if (patient.getStatus() == REGISTERED)
    {
        QMessageBox::about(this, "", "请先进行看诊");
        return;
    }
    for (int i = 0; i < patient.getDrugs().size(); ++i) {
        drugText += patient.getDrugs().at(i).toString() + " ";
    }
    ui->nameLabel->setVisible(true);
    ui->drugEdit->setText(drugText);
    totalCosts = patient.getCosts();
    ui->costLabel->setText(QString::number(totalCosts));
    ui->nameLabel->setText(patient.getName());
}


void Drug::on_addButton_clicked()
{
    if (ui->nameLabel->text().compare("TextLabel") == 0)
    {
        QMessageBox::about(this, "", "请先查询患者信息");
        return;
    }
    QString drugName = ui->searchEdit->text();
    QFile file("drugs.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::about(this, "", "打开药品文件失败");
        return;
    }
    qDebug() << "打开药品文件成功";
    bool ok = false;
    while (!file.atEnd())
    {
        if (drugName.compare(file.readLine().trimmed()) == 0)
        {
            qDebug() << "drugName:" << drugName;
            totalCosts += file.readLine().toDouble();
            qDebug() << "totalCosts:" << totalCosts;
            drugText += drugName + " ";
            drugs.append(drugName);
            ui->costLabel->setText(QString::number(totalCosts));
            ui->drugEdit->setText(drugText);
            ok = true;
            qDebug() << "添加" << drugName << "成功";
            break;
        }
    }
    if (!ok)
    {
        QMessageBox::about(this, "", "没有查询到该药品信息");
        return;
    }
    else
    {
        Patient patient = readPatient(patientId);
        patient.setDrugs(drugs);
        patient.setCosts(totalCosts);
        if (!savePatient(patient))
        {
            qDebug() << "保存drugs失败";
            return;
        }
        QMessageBox::about(this, "", "添加成功");
        file.close();
    }
}


void Drug::on_checkButton_clicked()
{
    if (ui->nameLabel->text() == "TextLabel")
    {
        QMessageBox::about(this, "", "请先查询患者信息");
        return;
    }
    Patient patient = readPatient(patientId);
    if (patient.getName() == "empty")
    {
        QMessageBox::about(this, "", "请先查询患者信息");
        return;
    }
    QMessageBox::about(this, "诊断信息", patient.getSymp());
}

