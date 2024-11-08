#ifndef INFOMENU_H
#define INFOMENU_H

#include <QWidget>
#include <QStringListModel>
#include "handle.h"
#include <QDir>

namespace Ui {
class InfoMenu;
}

class InfoMenu : public QWidget
{
    Q_OBJECT

public:
    explicit InfoMenu(QWidget *parent = nullptr);
    ~InfoMenu();

signals:
    void infoMenuClose();

private slots:
    void on_deleteButton_clicked();

    void on_backButton_clicked();

private:
    Ui::InfoMenu *ui;

    QStringListModel *stringModel;
};

#endif // INFOMENU_H
