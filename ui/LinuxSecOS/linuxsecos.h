#ifndef LINUXSECOS_H
#define LINUXSECOS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LinuxSecOS; }
QT_END_NAMESPACE

class LinuxSecOS : public QMainWindow
{
    Q_OBJECT

public:
    LinuxSecOS(QWidget *parent = nullptr);
    ~LinuxSecOS();

private:
    Ui::LinuxSecOS *ui;
};
#endif // LINUXSECOS_H
