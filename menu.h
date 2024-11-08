#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "registmenu.h"
#include "handle.h"
#include "drug.h"
#include "charge.h"
#include "infomenu.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void appointActionSlot();
    void handleActionSlot();
    void drugActionSlot();
    void chargeActionSlot();
    void infoActionSlot();

    void on_exitButton_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
