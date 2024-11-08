#include "appointment.h"
#include "ui_appointment.h"

Appointment::Appointment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Appointment)
{
    ui->setupUi(this);

    this->setWindowTitle("挂号界面");
    // connect(ui->backButton, &QPushButton::clicked, this, &Appointment::close);
    numberOfPatient = getNumberOfPatient();
}

Appointment::~Appointment()
{
    delete ui;
}

void Appointment::on_submitButton_clicked()
{
    int id = -1;
    id = numberOfPatient + 1;
    qDebug() << "id:" << id;
    QString name = ui->nameEdit->text();
    QString gender = ui->genderEdit->text();
    int age = -1;
    age = ui->ageEdit->text().toInt();
    QString cardNumber = ui->cardNumberEdit->text();
    if (name == nullptr || gender == nullptr || age == -1 || cardNumber == nullptr)
    {
        QMessageBox::about(this, "", "请填写完整信息");
        return;
    }
    QJsonArray emptyDrugs;
    if (savePatient(id, name, gender, age, cardNumber, "empty", 0.0, 0.0, 0, emptyDrugs))
        QMessageBox::about(this, "保存成功！", "您的病例号为: "+QString::number(id));
    else
        qDebug() << "保存失败！";
    on_backButton_clicked();
}


void Appointment::on_backButton_clicked()
{
    emit appointmentClose();
    this->close();
}

