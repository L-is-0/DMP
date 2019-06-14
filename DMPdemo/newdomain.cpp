#include "newdomain.h"
#include "ui_newdomain.h"

NewDomain::NewDomain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewDomain)
{
    ui->setupUi(this);
}

NewDomain::~NewDomain()
{
    delete ui;
}

