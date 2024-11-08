#ifndef CHARGE_H
#define CHARGE_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include "infomenu.h"

namespace Ui {
class Charge;
}

class Charge : public QWidget
{
    Q_OBJECT

public:
    explicit Charge(QWidget *parent = nullptr);
    ~Charge();

signals:
    void chargeClose();

private slots:
    void on_searchButton_clicked();

    void on_chargeButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Charge *ui;

    int id = -1;
};

#endif // CHARGE_H
