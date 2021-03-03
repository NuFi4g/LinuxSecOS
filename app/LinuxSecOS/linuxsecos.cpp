#include "linuxsecos.h"
#include "ui_linuxsecos.h"

#include "hostinfo.h"
#include "processinfo.h"
#include "securitymanage.h"
#include "statusinfo.h"

LinuxSecOS::LinuxSecOS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LinuxSecOS)
{
    ui->setupUi(this);

    init();
}

LinuxSecOS::~LinuxSecOS()
{
    delete ui;
}

/* *******************************************
 * @Created by NuFi4g
 * @Hit: 应用窗口初始化
 * ******************************************/
void LinuxSecOS::init(){
    // mainwindow
    this->setWindowTitle("LinuxSecOS");
    this->setWindowIcon(QIcon(":/img/logo.png"));

    // host
    HostInfo hostInfo;
    //
    QVector<QString> hardware=hostInfo.getHardwareInfo();
    QString cpuview = hardware.at(0) + " * " + hardware.at(4) + "(" + hardware.at(1) + ") (" + hardware.at(2) + " MHz, " + hardware.at(3) + ")";
    ui->label_cpu_info->setText(cpuview);
    QString ramview = hardware.at(6) + "(free)/" + hardware.at(5);
    ui->label_ram_info->setText(ramview);
    //
    QVector<QString> version=hostInfo.getVersionInfo();
    ui->label_os->setText(version.at(2));
    ui->label_kernel->setText(version.at(0));
    ui->label_gcc->setText(version.at(1));

    // process

    // status

    // security

    // about(check update)

    // start
    qDebug()<<"it is running good.";
}

/* *******************************************
 * @Created by NuFi4g
 * @Hit: 进程管理界面槽函数
 * ******************************************/
void LinuxSecOS::on_pb_refresh_clicked()
{

}

void LinuxSecOS::on_pb_kill_clicked()
{

}
