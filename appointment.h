#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QWidget>
// #include "Patient.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QMessageBox>
#include "Tools.h"

namespace Ui {
class Appointment;
}

class Appointment : public QWidget
{
    Q_OBJECT

public:
    explicit Appointment(QWidget *parent = nullptr);
    ~Appointment();

    void useAppointmentCloseSignal()
    {
        emit appointmentClose();
    }

signals:
    void appointmentClose();

private slots:
    void on_submitButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Appointment *ui;

    int numberOfPatient = 0;
};

#endif // APPOINTMENT_H
