#ifndef LEMONADELAUNCH_H
#define LEMONADELAUNCH_H

#include <QMainWindow>

namespace Ui {
class LemonadeLaunch;
}

class LemonadeLaunch : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LemonadeLaunch(QWidget *parent = 0);
    ~LemonadeLaunch();
    
private:
    Ui::LemonadeLaunch *ui;
};

#endif // LEMONADELAUNCH_H
