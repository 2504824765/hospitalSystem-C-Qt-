#include "menu.h"
#include "ui_menu.h"
#include <QDir>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    this->setWindowTitle("主界面");
    connect(ui->appointAction, &QAction::triggered, this, &Menu::appointActionSlot);
    connect(ui->hendleAction, &QAction::triggered, this, &Menu::handleActionSlot);
    connect(ui->drugAction, &QAction::triggered, this, &Menu::drugActionSlot);
    connect(ui->chargeAction, &QAction::triggered, this, &Menu::chargeActionSlot);
    connect(ui->infoAction, &QAction::triggered, this, &Menu::infoActionSlot);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::appointActionSlot()
{
    Appointment *appointment = new Appointment();
    connect(appointment, &Appointment::appointmentClose, this, &Menu::show);
    this->close();
    appointment->show();
}

void Menu::handleActionSlot()
{
    Handle *handle = new Handle();
    connect(handle, &Handle::handleClose, this, &Menu::show);
    this->close();
    handle->show();
}

void Menu::drugActionSlot()
{
    Drug *drug = new Drug();
    connect(drug, &Drug::drugClose, this, &Menu::show);
    this->close();
    drug->show();
}

void Menu::chargeActionSlot()
{
    Charge *charge = new Charge();
    connect(charge, &Charge::chargeClose, this, &Menu::show);
    this->close();
    charge->show();
}

void Menu::infoActionSlot()
{
    InfoMenu *infomenu = new InfoMenu();
    connect(infomenu, &InfoMenu::infoMenuClose, this, &Menu::show);
    this->close();
    infomenu->show();
}

void Menu::on_exitButton_clicked()
{
    this->close();
}

