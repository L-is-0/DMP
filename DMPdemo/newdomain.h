#ifndef NEWDOMAIN_H
#define NEWDOMAIN_H

#include <QMainWindow>

namespace Ui {
class NewDomain;
}

class NewDomain : public QMainWindow{
    Q_OBJECT

public:
    explicit NewDomain(QWidget *parent = nullptr);
    ~NewDomain();

private:
    Ui::NewDomain *ui;
};

#endif // NEWDOMAIN_H
