#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QMainWindow>
#include "newdomain.h"


namespace Ui {
class LandingPage;
}

class LandingPage : public QMainWindow{
    Q_OBJECT

public:
    explicit LandingPage(QWidget *parent = nullptr);
    ~LandingPage();

private slots:
    void on_btnNew_clicked();

private:
    Ui::LandingPage *ui;
    NewDomain *newdomain;

};

#endif // LANDINGPAGE_H
