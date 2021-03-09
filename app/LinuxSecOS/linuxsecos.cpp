#include "linuxsecos.h"
#include "ui_linuxsecos.h"


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
    delete timer;
}

/* *******************************************
 * @Created by NuFi4g
 * @Hit: 应用窗口初始化
 * ******************************************/
void LinuxSecOS::init(){
    // mainwindow
    this->setWindowTitle("LinuxSecOS");
    this->setWindowIcon(QIcon(":/img/logo.png"));

    // update
    timer = new QTimer(this);
    QWidget::connect(timer,SIGNAL(timeout()),this,SLOT(show_update_current_tab()));
    QWidget::connect(ui->tabWidget,SIGNAL(currentChanged(int)),this,SLOT(on_tabWidget_currentChanged(int)));
    timer->start(1000);

    // start hit
    qDebug()<<"it is running good.";
}

/* *******************************************
 * @Created by NuFi4g
 * @Hit: 指定页面超时更新
 * ******************************************/
void LinuxSecOS::show_update_current_tab()
{
    int index = ui->tabWidget->currentIndex();
    if(index==0)
        show_tabWidget_update(index);
}

/* *******************************************
 * @Created by NuFi4g
 * @Hit: 切换页面时响应
 * ******************************************/
void LinuxSecOS::on_tabWidget_currentChanged(int index)
{
    show_tabWidget_update(index);
    return;
}


/* *******************************************
 * @Created by NuFi4g
 * @Hit: 页面显示
 * ******************************************/
void LinuxSecOS::show_tabWidget_update(int index)
{
    QString tmpStr;
    int pos;

    if(index==0){
        /* *******************************************
     * @Created by NuFi4g
     * @Hit: show cpu status.
     * ******************************************/

        file.setFileName("/proc/stat");
        if ( !file.open(QIODevice::ReadOnly) )
        {
            qDebug()<<"Error: can't read /proc/stat.";
            return;
        }

        int a0 = 0, a1 = 0, b0 = 0, b1 = 0;

        tmpStr = file.readLine();
        a0 = a1;
        b0 = b1;
        a1 = b1 = 0;
        int gg;
        for (int i = 0; i < 7; i++)
        {
            b1 += tmpStr.section(" ", i+2, i+2).toInt();
            gg = b1;
            if (i == 3)
            {
                a1 += tmpStr.section(" ", i+2, i+2).toInt();
            }
        }
        int m, n;
        m = a1 - a0;
        n = b1 - b0;
        if (m < 0)
        {
            m = -m;
        }
        if (n < 0)
        {
            n = -n;
        }
        ui->progressBar_cpu->setValue( (n-m)*100/n );
        file.close();

        /* *******************************************
     * @Created by NuFi4g
     * @Hit: show cpu parameter.
     * ******************************************/

        file.setFileName("/proc/cpuinfo");
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug()<<"error: can't open /proc/cpuinfo";
            return;
        }

        QString model;
        QString cores;
        QString hz;
        QString cache;
        QString siblings;

        while(1){
            tmpStr=file.readLine();
            if(tmpStr<=0){
                break;
            }
            if((pos=tmpStr.indexOf("model name"))!=-1)
            {
                pos+=13;
                model=QString(tmpStr.mid(pos,tmpStr.length()-14));
            }else if((pos=tmpStr.indexOf("cpu cores"))!=-1)
            {
                pos+=12;
                cores=QString(tmpStr.mid(pos,tmpStr.length()-13));
            }else if((pos=tmpStr.indexOf("cpu MHz"))!=-1)
            {
                pos+=11;
                hz=QString(tmpStr.mid(pos,tmpStr.length()-12));
            }else if((pos=tmpStr.indexOf("cache size"))!=-1)
            {
                pos+=13;
                cache=QString(tmpStr.mid(pos,tmpStr.length()-14));
            }else if((pos=tmpStr.indexOf("siblings"))!=-1)
            {
                pos+=11;
                siblings=QString(tmpStr.mid(pos,tmpStr.length()-12));
            }
        }

        ui->label_cpu_info->setText(model+" * "+siblings+" ("+cores+") "+" "+cache+" "+hz+"MHZ");

        file.close();

        /* *******************************************
     * @Created by NuFi4g
     * @Hit: show mem and swap status.
     * ******************************************/

        file.setFileName("/proc/meminfo");
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug()<<"Error: can't read /proc/meminfo.";
            return;
        }

        QString memTotal;
        QString memFree;
        QString memUsed;
        QString swapTotal;
        QString swapFree;
        QString swapUsed;
        int nMemTotal, nMemFree, nMemUsed, nSwapTotal, nSwapFree, nSwapUsed;

        while (1)
        {
            tmpStr = file.readLine();
            pos = tmpStr.indexOf("MemTotal");
            if (pos != -1)
            {
                memTotal = tmpStr.mid(pos+10, tmpStr.length()-13);
                memTotal = memTotal.trimmed();
                nMemTotal = memTotal.toInt()/1024;
            }
            else if (pos = tmpStr.indexOf("MemFree"), pos != -1)
            {
                memFree = tmpStr.mid(pos+9, tmpStr.length()-12);
                memFree = memFree.trimmed();
                nMemFree = memFree.toInt()/1024;
            }
            else if (pos = tmpStr.indexOf("SwapTotal"), pos != -1)
            {
                swapTotal = tmpStr.mid(pos+11, tmpStr.length()-14);
                swapTotal = swapTotal.trimmed();
                nSwapTotal = swapTotal.toInt()/1024;
            }
            else if (pos = tmpStr.indexOf("SwapFree"), pos != -1)
            {
                swapFree = tmpStr.mid(pos+10,tmpStr.length()-13);
                swapFree = swapFree.trimmed();
                nSwapFree = swapFree.toInt()/1024;
                break;
            }
        }

        nMemUsed = nMemTotal-nMemFree;
        nSwapUsed = nSwapTotal-nSwapFree;

        memUsed = QString::number(nMemUsed, 10);
        swapUsed = QString::number(nSwapUsed, 10);
        memFree = QString::number(nMemFree, 10);
        memTotal = QString::number(nMemTotal, 10);
        swapFree = QString::number(nSwapFree, 10);
        swapTotal = QString::number(nSwapTotal, 10);

        ui->label_mem_used->setText(memUsed+" MB");
        ui->label_mem_free->setText(memFree+" MB");
        ui->label_mem_total->setText(memTotal+" MB");
        ui->label_swap_used->setText(swapUsed+" MB");
        ui->label_swap_free->setText(swapFree+" MB");
        ui->label_swap_total->setText(swapTotal+" MB");

        ui->progressBar_mem->setValue(nMemUsed*100/nMemTotal);
        ui->progressBar_swap->setValue(nSwapUsed*100/nSwapTotal);

        file.close();

        /* *******************************************
     * @Created by NuFi4g
     * @Hit: show linux and gcc version
     * ******************************************/
        file.setFileName("/proc/version");
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug()<<"error: can't open /proc/version";
            return;
        }
        QString linuxv;
        QString gccv;

        tmpStr=file.readLine();
        if(tmpStr>0)
        {
            int pos1=tmpStr.indexOf("Linux version");
            int pos2=tmpStr.indexOf(" (g");
            linuxv=QString(tmpStr.mid(pos1,pos2-pos1));

            pos1=tmpStr.indexOf("gcc (");
            pos2=tmpStr.indexOf(", GNU");
            gccv=QString(tmpStr.mid(pos1,pos2-pos1));
        }

        ui->label_kernel->setText(linuxv);
        ui->label_gcc->setText(gccv);

        file.close();

        /* *******************************************
     * @Created by NuFi4g
     * @Hit: show os version
     * ******************************************/

        file.setFileName("/etc/issue");
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug()<<"error: can't open /etc/issue";
            return;
        }
        QString osv;
        tmpStr=file.readLine();
        if(tmpStr>0){
            osv=QString(tmpStr.left(tmpStr.length()-7));
        }

        ui->label_os->setText(osv);

        file.close();
    }

    else if(index==1){
        ui->listWidget_proc->clear();
        QDir qd("/proc");
        QStringList qsList=qd.entryList();
        QString qs = qsList.join("\n");
        QString id_proc;
        int num_run = 0, num_sleep = 0,num_zombie =0,num_total=0;

        int find_start=3;
        int a,b,nProPid;
        bool ok;
        QString proName;
        QString proState;
        QString proPri;
        QString proMem;

        QListWidgetItem *title = new QListWidgetItem("PID\t"+QString::fromUtf8("名称") + "\t\t" +
                                                     QString::fromUtf8("状态") + "\t" +
                                                     QString::fromUtf8("优先级") + "\t" +
                                                     QString::fromUtf8("占用内存"),ui->listWidget_proc);
        //循环读取进程
        while (1)
        {
            //获取进程PID
            a = qs.indexOf("\n", find_start);
            b = qs.indexOf("\n", a+1);
            find_start = b;
            id_proc = qs.mid(a+1, b-a-1);
            num_total++;
            nProPid = id_proc.toInt(&ok, 10);
            if(!ok)
            {
                break;
            }

            //打开PID所对应的进程状态文件
            file.setFileName("/proc/" + id_proc + "/stat");
            if ( !file.open(QIODevice::ReadOnly) )
            {
                qDebug()<<"The pid stat file can not open!";
                return;
            }
            tmpStr = file.readLine();
            if (tmpStr.length() == 0)
            {
                break;
            }
            a = tmpStr.indexOf("(");
            b = tmpStr.indexOf(")");
            proName = tmpStr.mid(a+1, b-a-1);
            proName.trimmed();
            proState = tmpStr.section(" ", 2, 2);
            proPri = tmpStr.section(" ", 17, 17);
            proMem = tmpStr.section(" ", 22, 22);

            switch ( proState.at(0).toLatin1() )
            {
            case 'S':   num_sleep++; break; //Sleep
            case 'R':   num_run++; break; //Running
            case 'Z':   num_zombie++; break; //Zombie
            default :   break;
            }

            if (proName.length() >= 20)
            {
                QListWidgetItem *item = new QListWidgetItem(id_proc + "\t" +
                                                            proName + "\t" +
                                                            proState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget_proc);
            }
            else
            {
                QListWidgetItem *item = new QListWidgetItem(id_proc + "\t" +
                                                            proName + "\t\t" +
                                                            proState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget_proc);
            }

            file.close();
        }

        QString temp;
        temp = QString::number(num_total, 10);
        ui->label_pro_total_num->setText(temp);
        temp = QString::number(num_zombie, 10);
        ui->label_pro_zombie_num->setText(temp);
        temp = QString::number(num_run, 10);
        ui->label_pro_alive_num->setText(temp);
    }

    else if(index==2){
        qDebug()<<"tab 2";
    }

    else if(index==3){
        qDebug()<<"tab 3";
    }
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
