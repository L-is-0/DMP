/********************************************************************************
** Form generated from reading UI file 'newdomain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDOMAIN_H
#define UI_NEWDOMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewDomain
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuHelloWorld;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewDomain)
    {
        if (NewDomain->objectName().isEmpty())
            NewDomain->setObjectName(QString::fromUtf8("NewDomain"));
        NewDomain->resize(800, 600);
        centralwidget = new QWidget(NewDomain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 30, 141, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 70, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 110, 91, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(370, 70, 113, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 110, 113, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 110, 59, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 150, 151, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 190, 114, 32));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(150, 20, 451, 221));
        NewDomain->setCentralWidget(centralwidget);
        listWidget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_4->raise();
        label_5->raise();
        pushButton->raise();
        menubar = new QMenuBar(NewDomain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuHelloWorld = new QMenu(menubar);
        menuHelloWorld->setObjectName(QString::fromUtf8("menuHelloWorld"));
        NewDomain->setMenuBar(menubar);
        statusbar = new QStatusBar(NewDomain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewDomain->setStatusBar(statusbar);

        menubar->addAction(menuHelloWorld->menuAction());

        retranslateUi(NewDomain);

        QMetaObject::connectSlotsByName(NewDomain);
    } // setupUi

    void retranslateUi(QMainWindow *NewDomain)
    {
        NewDomain->setWindowTitle(QApplication::translate("NewDomain", "MainWindow", nullptr));
        label->setText(QApplication::translate("NewDomain", "Create a New Domain", nullptr));
        label_2->setText(QApplication::translate("NewDomain", "Domain Name :", nullptr));
        label_3->setText(QApplication::translate("NewDomain", "Domain URL :", nullptr));
        label_4->setText(QApplication::translate("NewDomain", ".mp.com", nullptr));
        label_5->setText(QApplication::translate("NewDomain", "+ invite people by email", nullptr));
        pushButton->setText(QApplication::translate("NewDomain", "Create", nullptr));
        menuHelloWorld->setTitle(QApplication::translate("NewDomain", "New Domain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewDomain: public Ui_NewDomain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDOMAIN_H
