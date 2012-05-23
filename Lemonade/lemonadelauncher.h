#ifndef LEMONADELAUNCHER_H
#define LEMONADELAUNCHER_H

#include <QMainWindow>

namespace Ui {
class LemonadeLauncher;
}

class LemonadeLauncher : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LemonadeLauncher(QWidget *parent = 0);
    ~LemonadeLauncher();
    
private:
    Ui::LemonadeLauncher *ui;
};

#endif // LEMONADELAUNCHER_H
