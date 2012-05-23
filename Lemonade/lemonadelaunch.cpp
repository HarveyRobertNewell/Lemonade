#include "lemonadelaunch.h"
#include "ui_lemonadelaunch.h"

LemonadeLaunch::LemonadeLaunch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LemonadeLaunch)
{
    ui->setupUi(this);
}

LemonadeLaunch::~LemonadeLaunch()
{
    delete ui;
}
