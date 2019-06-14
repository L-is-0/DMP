/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnNew;
    QGraphicsView *graphicsView;
    QLabel *label_5;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName(QString::fromUtf8("LandingPage"));
        LandingPage->resize(800, 600);
        centralwidget = new QWidget(LandingPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 141, 391));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 59, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 59, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 130, 59, 16));
        btnNew = new QPushButton(centralwidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(20, 180, 114, 32));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(180, 50, 591, 391));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 210, 71, 16));
        LandingPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LandingPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QString::fromUtf8("menuHello"));
        LandingPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LandingPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LandingPage->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());

        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QMainWindow *LandingPage)
    {
        LandingPage->setWindowTitle(QApplication::translate("LandingPage", "MainWindow", nullptr));
        label->setText(QApplication::translate("LandingPage", "Domain Management", nullptr));
        label_2->setText(QApplication::translate("LandingPage", "Potato 1", nullptr));
        label_3->setText(QApplication::translate("LandingPage", "Potato 2", nullptr));
        label_4->setText(QApplication::translate("LandingPage", "Potato 3", nullptr));
        btnNew->setText(QApplication::translate("LandingPage", "New Domain", nullptr));
        label_5->setText(QApplication::translate("LandingPage", "Workspace", nullptr));
        menuHello->setTitle(QApplication::translate("LandingPage", "Hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
