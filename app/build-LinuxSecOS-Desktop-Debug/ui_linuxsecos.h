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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinuxSecOS
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_host;
    QGridLayout *gridLayout_2;
    QGroupBox *gb_network;
    QGroupBox *gb_others;
    QGroupBox *gb_version;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLabel *label_os;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLabel *label_kernel;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_22;
    QLabel *label_gcc;
    QGroupBox *gb_hardware;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_cpu;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar_cpu;
    QLabel *label_cpu_info;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_ram;
    QVBoxLayout *verticalLayout_7;
    QProgressBar *progressBar_mem;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLabel *label_mem_used;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_21;
    QLabel *label_mem_free;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_24;
    QLabel *label_mem_total;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_swap;
    QVBoxLayout *verticalLayout_8;
    QProgressBar *progressBar_swap;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_26;
    QLabel *label_swap_used;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_28;
    QLabel *label_swap_free;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_30;
    QLabel *label_swap_total;
    QWidget *tab_process;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_pro_total;
    QLabel *label_pro_total_num;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_20;
    QLabel *label_pro_alive_num;
    QSpacerItem *horizontalSpacer;
    QLabel *label_pro_zombie;
    QLabel *label_pro_zombie_num;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_refresh;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_kill;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listWidget_proc;
    QWidget *tab_status;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_15;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *tab_security;
    QWidget *tab_about;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LinuxSecOS)
    {
        if (LinuxSecOS->objectName().isEmpty())
            LinuxSecOS->setObjectName(QString::fromUtf8("LinuxSecOS"));
        LinuxSecOS->resize(826, 659);
        centralwidget = new QWidget(LinuxSecOS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_host = new QWidget();
        tab_host->setObjectName(QString::fromUtf8("tab_host"));
        gridLayout_2 = new QGridLayout(tab_host);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gb_network = new QGroupBox(tab_host);
        gb_network->setObjectName(QString::fromUtf8("gb_network"));

        gridLayout_2->addWidget(gb_network, 2, 0, 1, 1);

        gb_others = new QGroupBox(tab_host);
        gb_others->setObjectName(QString::fromUtf8("gb_others"));

        gridLayout_2->addWidget(gb_others, 3, 0, 1, 1);

        gb_version = new QGroupBox(tab_host);
        gb_version->setObjectName(QString::fromUtf8("gb_version"));
        gridLayout_9 = new QGridLayout(gb_version);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(gb_version);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(label_17);

        label_os = new QLabel(gb_version);
        label_os->setObjectName(QString::fromUtf8("label_os"));

        horizontalLayout_4->addWidget(label_os);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_19 = new QLabel(gb_version);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(label_19);

        label_kernel = new QLabel(gb_version);
        label_kernel->setObjectName(QString::fromUtf8("label_kernel"));

        horizontalLayout_6->addWidget(label_kernel);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_22 = new QLabel(gb_version);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(label_22);

        label_gcc = new QLabel(gb_version);
        label_gcc->setObjectName(QString::fromUtf8("label_gcc"));

        horizontalLayout_12->addWidget(label_gcc);


        verticalLayout_6->addLayout(horizontalLayout_12);


        gridLayout_9->addLayout(verticalLayout_6, 0, 0, 1, 1);


        gridLayout_2->addWidget(gb_version, 1, 0, 1, 1);

        gb_hardware = new QGroupBox(tab_host);
        gb_hardware->setObjectName(QString::fromUtf8("gb_hardware"));
        gridLayout_3 = new QGridLayout(gb_hardware);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_cpu = new QLabel(gb_hardware);
        label_cpu->setObjectName(QString::fromUtf8("label_cpu"));
        label_cpu->setMinimumSize(QSize(100, 0));
        label_cpu->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_cpu);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBar_cpu = new QProgressBar(gb_hardware);
        progressBar_cpu->setObjectName(QString::fromUtf8("progressBar_cpu"));
        progressBar_cpu->setValue(24);

        verticalLayout->addWidget(progressBar_cpu);

        label_cpu_info = new QLabel(gb_hardware);
        label_cpu_info->setObjectName(QString::fromUtf8("label_cpu_info"));

        verticalLayout->addWidget(label_cpu_info);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_ram = new QLabel(gb_hardware);
        label_ram->setObjectName(QString::fromUtf8("label_ram"));
        label_ram->setMinimumSize(QSize(100, 0));
        label_ram->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_13->addWidget(label_ram);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        progressBar_mem = new QProgressBar(gb_hardware);
        progressBar_mem->setObjectName(QString::fromUtf8("progressBar_mem"));
        progressBar_mem->setValue(24);

        verticalLayout_7->addWidget(progressBar_mem);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_18 = new QLabel(gb_hardware);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(50, 0));
        label_18->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(label_18);

        label_mem_used = new QLabel(gb_hardware);
        label_mem_used->setObjectName(QString::fromUtf8("label_mem_used"));
        label_mem_used->setMinimumSize(QSize(60, 0));
        label_mem_used->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(label_mem_used);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_17);

        label_21 = new QLabel(gb_hardware);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(50, 0));

        horizontalLayout_5->addWidget(label_21);

        label_mem_free = new QLabel(gb_hardware);
        label_mem_free->setObjectName(QString::fromUtf8("label_mem_free"));
        label_mem_free->setMinimumSize(QSize(60, 0));
        label_mem_free->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(label_mem_free);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);

        label_24 = new QLabel(gb_hardware);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(50, 0));

        horizontalLayout_5->addWidget(label_24);

        label_mem_total = new QLabel(gb_hardware);
        label_mem_total->setObjectName(QString::fromUtf8("label_mem_total"));
        label_mem_total->setMinimumSize(QSize(60, 0));
        label_mem_total->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(label_mem_total);


        verticalLayout_7->addLayout(horizontalLayout_5);


        horizontalLayout_13->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_swap = new QLabel(gb_hardware);
        label_swap->setObjectName(QString::fromUtf8("label_swap"));
        label_swap->setMinimumSize(QSize(100, 0));
        label_swap->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_14->addWidget(label_swap);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        progressBar_swap = new QProgressBar(gb_hardware);
        progressBar_swap->setObjectName(QString::fromUtf8("progressBar_swap"));
        progressBar_swap->setValue(24);

        verticalLayout_8->addWidget(progressBar_swap);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_26 = new QLabel(gb_hardware);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(50, 0));

        horizontalLayout_15->addWidget(label_26);

        label_swap_used = new QLabel(gb_hardware);
        label_swap_used->setObjectName(QString::fromUtf8("label_swap_used"));
        label_swap_used->setMinimumSize(QSize(60, 0));
        label_swap_used->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_15->addWidget(label_swap_used);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_19);

        label_28 = new QLabel(gb_hardware);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(50, 0));

        horizontalLayout_15->addWidget(label_28);

        label_swap_free = new QLabel(gb_hardware);
        label_swap_free->setObjectName(QString::fromUtf8("label_swap_free"));
        label_swap_free->setMinimumSize(QSize(60, 0));
        label_swap_free->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_15->addWidget(label_swap_free);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_20);

        label_30 = new QLabel(gb_hardware);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(50, 0));

        horizontalLayout_15->addWidget(label_30);

        label_swap_total = new QLabel(gb_hardware);
        label_swap_total->setObjectName(QString::fromUtf8("label_swap_total"));
        label_swap_total->setMinimumSize(QSize(60, 0));
        label_swap_total->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_15->addWidget(label_swap_total);


        verticalLayout_8->addLayout(horizontalLayout_15);


        horizontalLayout_14->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_14);


        gridLayout_3->addLayout(verticalLayout_9, 0, 0, 1, 1);


        gridLayout_2->addWidget(gb_hardware, 0, 0, 1, 1);

        tabWidget->addTab(tab_host, QString());
        tab_process = new QWidget();
        tab_process->setObjectName(QString::fromUtf8("tab_process"));
        gridLayout_4 = new QGridLayout(tab_process);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_pro_total = new QLabel(tab_process);
        label_pro_total->setObjectName(QString::fromUtf8("label_pro_total"));

        horizontalLayout_7->addWidget(label_pro_total);

        label_pro_total_num = new QLabel(tab_process);
        label_pro_total_num->setObjectName(QString::fromUtf8("label_pro_total_num"));

        horizontalLayout_7->addWidget(label_pro_total_num);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);

        label_20 = new QLabel(tab_process);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_7->addWidget(label_20);

        label_pro_alive_num = new QLabel(tab_process);
        label_pro_alive_num->setObjectName(QString::fromUtf8("label_pro_alive_num"));

        horizontalLayout_7->addWidget(label_pro_alive_num);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label_pro_zombie = new QLabel(tab_process);
        label_pro_zombie->setObjectName(QString::fromUtf8("label_pro_zombie"));

        horizontalLayout_7->addWidget(label_pro_zombie);

        label_pro_zombie_num = new QLabel(tab_process);
        label_pro_zombie_num->setObjectName(QString::fromUtf8("label_pro_zombie_num"));

        horizontalLayout_7->addWidget(label_pro_zombie_num);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        pb_refresh = new QPushButton(tab_process);
        pb_refresh->setObjectName(QString::fromUtf8("pb_refresh"));

        horizontalLayout_7->addWidget(pb_refresh);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pb_kill = new QPushButton(tab_process);
        pb_kill->setObjectName(QString::fromUtf8("pb_kill"));

        horizontalLayout_7->addWidget(pb_kill);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        listWidget_proc = new QListWidget(tab_process);
        listWidget_proc->setObjectName(QString::fromUtf8("listWidget_proc"));

        gridLayout_4->addWidget(listWidget_proc, 0, 0, 1, 1);

        tabWidget->addTab(tab_process, QString());
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        gridLayout_6 = new QGridLayout(tab_status);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(tab_status);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_4->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout->addWidget(label_13);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout->addWidget(label_14);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout_7->addLayout(verticalLayout_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_status);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout_5->addWidget(widget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_2->addWidget(label_15);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);


        verticalLayout_5->addLayout(horizontalLayout_2);


        gridLayout_8->addLayout(verticalLayout_5, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_status);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_status);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        verticalLayout_3->addWidget(groupBox_4);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_status, QString());
        tab_security = new QWidget();
        tab_security->setObjectName(QString::fromUtf8("tab_security"));
        tabWidget->addTab(tab_security, QString());
        tab_about = new QWidget();
        tab_about->setObjectName(QString::fromUtf8("tab_about"));
        gridLayout_5 = new QGridLayout(tab_about);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(tab_about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));

        horizontalLayout_8->addWidget(label);

        label_2 = new QLabel(tab_about);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        label_11 = new QLabel(tab_about);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(tab_about);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_7 = new QLabel(tab_about);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_7);

        label_4 = new QLabel(tab_about);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_8 = new QLabel(tab_about);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_8);

        label_5 = new QLabel(tab_about);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_9 = new QLabel(tab_about);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_9);

        label_6 = new QLabel(tab_about);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_10 = new QLabel(tab_about);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_10);

        label_12 = new QLabel(tab_about);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_12);


        horizontalLayout_10->addLayout(formLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_about, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        LinuxSecOS->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LinuxSecOS);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LinuxSecOS->setStatusBar(statusbar);

        retranslateUi(LinuxSecOS);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LinuxSecOS);
    } // setupUi

    void retranslateUi(QMainWindow *LinuxSecOS)
    {
        LinuxSecOS->setWindowTitle(QCoreApplication::translate("LinuxSecOS", "LinuxSecOS", nullptr));
        gb_network->setTitle(QCoreApplication::translate("LinuxSecOS", "\347\275\221\347\273\234\345\217\202\346\225\260", nullptr));
        gb_others->setTitle(QCoreApplication::translate("LinuxSecOS", "\345\205\266\345\256\203\345\217\202\346\225\260", nullptr));
        gb_version->setTitle(QCoreApplication::translate("LinuxSecOS", "\347\211\210\346\234\254\345\217\202\346\225\260", nullptr));
        label_17->setText(QCoreApplication::translate("LinuxSecOS", "\347\263\273\347\273\237\347\211\210\346\234\254", nullptr));
        label_os->setText(QCoreApplication::translate("LinuxSecOS", " []", nullptr));
        label_19->setText(QCoreApplication::translate("LinuxSecOS", "\345\206\205\346\240\270\347\211\210\346\234\254", nullptr));
        label_kernel->setText(QCoreApplication::translate("LinuxSecOS", " []", nullptr));
        label_22->setText(QCoreApplication::translate("LinuxSecOS", "GCC\347\211\210\346\234\254", nullptr));
        label_gcc->setText(QCoreApplication::translate("LinuxSecOS", " []", nullptr));
        gb_hardware->setTitle(QCoreApplication::translate("LinuxSecOS", "\347\241\254\344\273\266\345\217\202\346\225\260", nullptr));
        label_cpu->setText(QCoreApplication::translate("LinuxSecOS", "CPU\345\217\202\346\225\260", nullptr));
        label_cpu_info->setText(QCoreApplication::translate("LinuxSecOS", " []", nullptr));
        label_ram->setText(QCoreApplication::translate("LinuxSecOS", "\345\206\205\345\255\230\345\217\202\346\225\260", nullptr));
        label_18->setText(QCoreApplication::translate("LinuxSecOS", "Used", nullptr));
        label_mem_used->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        label_21->setText(QCoreApplication::translate("LinuxSecOS", "Free", nullptr));
        label_mem_free->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        label_24->setText(QCoreApplication::translate("LinuxSecOS", "Total", nullptr));
        label_mem_total->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        label_swap->setText(QCoreApplication::translate("LinuxSecOS", "\344\272\244\346\215\242\345\217\202\346\225\260", nullptr));
        label_26->setText(QCoreApplication::translate("LinuxSecOS", "Used", nullptr));
        label_swap_used->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        label_28->setText(QCoreApplication::translate("LinuxSecOS", "Free", nullptr));
        label_swap_free->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        label_30->setText(QCoreApplication::translate("LinuxSecOS", "Total", nullptr));
        label_swap_total->setText(QCoreApplication::translate("LinuxSecOS", "[]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_host), QCoreApplication::translate("LinuxSecOS", "\344\270\273\346\234\272\345\217\202\346\225\260", nullptr));
        label_pro_total->setText(QCoreApplication::translate("LinuxSecOS", "\346\200\273\350\277\233\347\250\213\346\225\260  ", nullptr));
        label_pro_total_num->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("LinuxSecOS", "\345\255\230\346\264\273\346\225\260\351\207\217", nullptr));
        label_pro_alive_num->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        label_pro_zombie->setText(QCoreApplication::translate("LinuxSecOS", "\345\203\265\346\255\273\346\225\260\351\207\217", nullptr));
        label_pro_zombie_num->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        pb_refresh->setText(QCoreApplication::translate("LinuxSecOS", "\345\210\267\346\226\260", nullptr));
        pb_kill->setText(QCoreApplication::translate("LinuxSecOS", "\347\273\210\347\273\223\350\277\233\347\250\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_process), QCoreApplication::translate("LinuxSecOS", "\350\277\233\347\250\213\347\256\241\347\220\206", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LinuxSecOS", "GroupBox", nullptr));
        label_13->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LinuxSecOS", "GroupBox", nullptr));
        label_15->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LinuxSecOS", "GroupBox", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LinuxSecOS", "GroupBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_status), QCoreApplication::translate("LinuxSecOS", "\344\270\273\346\234\272\347\212\266\346\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_security), QCoreApplication::translate("LinuxSecOS", "\345\256\211\345\205\250\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("LinuxSecOS", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("LinuxSecOS", "LinuxSecOS", nullptr));
        label_11->setText(QCoreApplication::translate("LinuxSecOS", "Version_1.0", nullptr));
        label_3->setText(QCoreApplication::translate("LinuxSecOS", "\344\275\234        \350\200\205", nullptr));
        label_7->setText(QCoreApplication::translate("LinuxSecOS", "NuFi4g", nullptr));
        label_4->setText(QCoreApplication::translate("LinuxSecOS", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_8->setText(QCoreApplication::translate("LinuxSecOS", "yunink@yunink.top", nullptr));
        label_5->setText(QCoreApplication::translate("LinuxSecOS", "\346\233\264\346\226\260\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("LinuxSecOS", "2021-03-02", nullptr));
        label_6->setText(QCoreApplication::translate("LinuxSecOS", "\345\274\200\345\217\221\347\216\257\345\242\203", nullptr));
        label_10->setText(QCoreApplication::translate("LinuxSecOS", "Ubuntu 20.10(5.8.0-44-generic)", nullptr));
        label_12->setText(QCoreApplication::translate("LinuxSecOS", "GCC-10.2.0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_about), QCoreApplication::translate("LinuxSecOS", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinuxSecOS: public Ui_LinuxSecOS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINUXSECOS_H
