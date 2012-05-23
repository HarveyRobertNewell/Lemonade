#include "lemonadelauncher.h"
#include "ui_lemonadelauncher.h"

LemonadeLauncher::LemonadeLauncher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LemonadeLauncher)
{
    ui->setupUi(this);
}

LemonadeLauncher::~LemonadeLauncher()
{
    delete ui;
}
