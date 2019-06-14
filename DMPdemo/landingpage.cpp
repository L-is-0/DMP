#include "landingpage.h"
#include "ui_landingpage.h"

LandingPage::LandingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LandingPage)
{
    ui->setupUi(this);
}

LandingPage::~LandingPage()
{
    delete ui;
}

void LandingPage::on_btnNew_clicked()
{

    newdomain = new NewDomain(this);
    newdomain->show();
}

