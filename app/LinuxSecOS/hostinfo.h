#ifndef HOSTINFO_H
#define HOSTINFO_H

#include <QObject>
#include <QFile>
#include <QDebug>

class HostInfo
{
public:
    // 声明显式类构造函数
//    explicit HostInfo(QObject *parent=0);
    HostInfo();
    // 动态封装
    QVector<QString> getHardwareInfo();
    QVector<QString> getVersionInfo();
    QVector<QString> getNetworkInfo();
    QVector<QString> getOtherInfo();

private:
    QFile file;
};

#endif // HOSTINFO_H
