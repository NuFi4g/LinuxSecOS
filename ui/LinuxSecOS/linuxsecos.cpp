#include "linuxsecos.h"
#include "ui_linuxsecos.h"

LinuxSecOS::LinuxSecOS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LinuxSecOS)
{
    ui->setupUi(this);
}

LinuxSecOS::~LinuxSecOS()
{
    delete ui;
}

