#ifndef LINUXSECOS_H
#define LINUXSECOS_H

#include <QMainWindow>

#include <QFile>
#include <QDebug>
#include <QTimer>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class LinuxSecOS; }
QT_END_NAMESPACE

class LinuxSecOS : public QMainWindow
{
    Q_OBJECT

public:
    LinuxSecOS(QWidget *parent = nullptr);
    ~LinuxSecOS();

private slots:
    void on_pb_refresh_clicked();

    void on_pb_kill_clicked();

    //nuf
    void show_tabWidget_update(int index);
    void show_update_current_tab();
    void on_tabWidget_currentChanged(int index);

private:
    Ui::LinuxSecOS *ui;
    void init();

    QFile file;
    QTimer *timer;
};
#endif // LINUXSECOS_H
