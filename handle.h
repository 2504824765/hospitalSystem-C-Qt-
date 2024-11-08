#ifndef HANDLE_H
#define HANDLE_H

#include <QWidget>
#include <QFile>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
//这里本来要引用Patient.h，但是这样会造成重复引用导致报错，我们通过引用appointment.h来间接引用Patient.h
#include "appointment.h"

namespace Ui {
class Handle;
}

class Handle : public QWidget
{
    Q_OBJECT

public:
    explicit Handle(QWidget *parent = nullptr);
    ~Handle();

signals:
    void handleClose();

private slots:
    void on_searchButton_clicked();

    void on_submitButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Handle *ui;

    // Patient *patient;
    Patient patient = Patient("empty");
};

#endif // HANDLE_H
