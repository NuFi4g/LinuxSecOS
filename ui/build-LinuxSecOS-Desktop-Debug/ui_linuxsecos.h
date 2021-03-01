/********************************************************************************
** Form generated from reading UI file 'linuxsecos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINUXSECOS_H
#define UI_LINUXSECOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinuxSecOS
{
public:
    QAction *ac_plugin;
    QAction *ac_setting;
    QAction *ac_about;
    QAction *ac_quit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuLinuxSecOS;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LinuxSecOS)
    {
        if (LinuxSecOS->objectName().isEmpty())
            LinuxSecOS->setObjectName(QString::fromUtf8("LinuxSecOS"));
        LinuxSecOS->resize(800, 600);
        ac_plugin = new QAction(LinuxSecOS);
        ac_plugin->setObjectName(QString::fromUtf8("ac_plugin"));
        ac_setting = new QAction(LinuxSecOS);
        ac_setting->setObjectName(QString::fromUtf8("ac_setting"));
        ac_about = new QAction(LinuxSecOS);
        ac_about->setObjectName(QString::fromUtf8("ac_about"));
        ac_quit = new QAction(LinuxSecOS);
        ac_quit->setObjectName(QString::fromUtf8("ac_quit"));
        centralwidget = new QWidget(LinuxSecOS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LinuxSecOS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LinuxSecOS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menuLinuxSecOS = new QMenu(menubar);
        menuLinuxSecOS->setObjectName(QString::fromUtf8("menuLinuxSecOS"));
        LinuxSecOS->setMenuBar(menubar);
        statusbar = new QStatusBar(LinuxSecOS);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LinuxSecOS->setStatusBar(statusbar);

        menubar->addAction(menuLinuxSecOS->menuAction());
        menuLinuxSecOS->addAction(ac_plugin);
        menuLinuxSecOS->addAction(ac_setting);
        menuLinuxSecOS->addSeparator();
        menuLinuxSecOS->addAction(ac_about);
        menuLinuxSecOS->addSeparator();
        menuLinuxSecOS->addAction(ac_quit);

        retranslateUi(LinuxSecOS);
        QObject::connect(ac_quit, SIGNAL(triggered()), LinuxSecOS, SLOT(close()));

        QMetaObject::connectSlotsByName(LinuxSecOS);
    } // setupUi

    void retranslateUi(QMainWindow *LinuxSecOS)
    {
        LinuxSecOS->setWindowTitle(QCoreApplication::translate("LinuxSecOS", "LinuxSecOS", nullptr));
        ac_plugin->setText(QCoreApplication::translate("LinuxSecOS", " Plugin", nullptr));
        ac_setting->setText(QCoreApplication::translate("LinuxSecOS", " Setting", nullptr));
        ac_about->setText(QCoreApplication::translate("LinuxSecOS", " About", nullptr));
        ac_quit->setText(QCoreApplication::translate("LinuxSecOS", " Quit", nullptr));
#if QT_CONFIG(shortcut)
        ac_quit->setShortcut(QCoreApplication::translate("LinuxSecOS", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuLinuxSecOS->setTitle(QCoreApplication::translate("LinuxSecOS", "LinuxSecOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinuxSecOS: public Ui_LinuxSecOS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINUXSECOS_H
