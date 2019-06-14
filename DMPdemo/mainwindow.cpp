#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginBtn_clicked()
{
    QString username, password;

    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    landingpage = new LandingPage(this);
    landingpage->show();
}

