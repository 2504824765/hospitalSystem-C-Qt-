#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include "registmenu.h"
#include "appointment.h"
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_accountEdit_editingFinished();

    void on_passwordEdit_editingFinished();

    void on_loginButton_clicked();

    void on_registButton_clicked();

    void on_accountEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Widget *ui;

    QString account;
    QString password;
    Menu *menu;

    void login();
};
#endif // WIDGET_H
