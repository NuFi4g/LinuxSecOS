#include "hostinfo.h"

HostInfo::HostInfo()
{

}

QVector<QString> HostInfo::getHardwareInfo(){
    QVector<QString> hardwareInfo(7,"\0");
    QString tmpStr;
    char buf[128];
    int f_step;
    int res;
    int flag=0;

    file.setFileName("/proc/cpuinfo");
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"error: can't open /proc/cpuinfo";
        return hardwareInfo;
    }
    while(flag<5){
        res=file.readLine(buf,size_t(buf));
        if(res<=0){
            break;
        }
        tmpStr=QString(buf);
        if((f_step=tmpStr.indexOf("model name"))!=-1){
            f_step+=13;
            hardwareInfo[0]=QString(tmpStr.mid(f_step,tmpStr.length()-14));
            flag++;
        }else if((f_step=tmpStr.indexOf("cpu cores"))!=-1){
            f_step+=12;
            hardwareInfo[1]=QString(tmpStr.mid(f_step,tmpStr.length()-13));
            flag++;
        }else if((f_step=tmpStr.indexOf("cpu MHz"))!=-1){
            f_step+=11;
            hardwareInfo[2]=QString(tmpStr.mid(f_step,tmpStr.length()-12));
            flag++;
        }else if((f_step=tmpStr.indexOf("cache size"))!=-1){
            f_step+=13;
            hardwareInfo[3]=QString(tmpStr.mid(f_step,tmpStr.length()-14));
            flag++;
        }else if((f_step=tmpStr.indexOf("siblings"))!=-1){
            f_step+=11;
            hardwareInfo[4]=QString(tmpStr.mid(f_step,tmpStr.length()-12));
            flag++;
        }
    }
    file.close();

    file.setFileName("/proc/meminfo");
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"error: cat open /proc/meminfo";
        return hardwareInfo;
    }
    while(flag<7){
        res=file.readLine(buf,size_t(buf));
        if(res<=0)
            break;
        tmpStr=QString(buf);
        if((f_step=tmpStr.indexOf("MemTotal"))!=-1){
            f_step+=13;
            hardwareInfo[5]=QString(tmpStr.mid(f_step,tmpStr.length()-14));
            flag++;
        }else if((f_step=tmpStr.indexOf("MemAvailable"))!=-1){
            f_step+=15;
            hardwareInfo[6]=QString(tmpStr.mid(f_step,tmpStr.length()-16)).right(tmpStr.length()-18);
            flag++;
        }
    }
    file.close();

    return hardwareInfo;
}

QVector<QString> HostInfo::getVersionInfo(){
    QVector<QString> versionInfo(3,"\0");
    QString tmpStr;
    char buf[128];
    int res;

    file.setFileName("/proc/version");
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"error: can't open /proc/version";
        return versionInfo;
    }
    res=file.readLine(buf,sizeof(buf));
    if(res>0){
        tmpStr=QString(buf);
        int pos1=tmpStr.indexOf("Linux version");
        int pos2=tmpStr.indexOf(" (g");
        versionInfo[0]=QString(tmpStr.mid(pos1,pos2-pos1));

        pos1=tmpStr.indexOf("gcc (");
        pos2=tmpStr.indexOf(", GNU");
        versionInfo[1]=QString(tmpStr.mid(pos1,pos2-pos1));
    }
    file.close();

    file.setFileName("/etc/issue");
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"error: can't open /etc/issue";
        return versionInfo;
    }
    res=file.readLine(buf,sizeof(buf));
    if(res>0){
        tmpStr=QString(buf);
        versionInfo[2]=QString(tmpStr.left(tmpStr.length()-7));
    }
    file.close();

    return versionInfo;
}
