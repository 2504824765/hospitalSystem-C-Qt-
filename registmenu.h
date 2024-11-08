#ifndef REGISTMENU_H
#define REGISTMENU_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>

namespace Ui {
class RegistMenu;
}

class RegistMenu : public QWidget
{
    Q_OBJECT

public:
    explicit RegistMenu(QWidget *parent = nullptr);
    ~RegistMenu();

private slots:
    void on_registButton_clicked();

    void on_backButton_clicked();

signals:
    void subclose();

private:
    Ui::RegistMenu *ui;

    void closeEvent(QCloseEvent *)
    {
        emit subclose();
    }
};

#endif // REGISTMENU_H
