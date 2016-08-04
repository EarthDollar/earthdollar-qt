#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include "farmsetting.h"
#include <QProcess>
#include <QString>
#include "qjsonrpc/qjsonrpchttpclient.h"
#include "qjsonrpc/qjsonrpcmessage.h"

class QAction;
class QMenu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openFarmWindow();
    void manageFarming();

private:
    void createActions();
    void createTrayIcon();
    bool runEthminer();
    bool runGeth();    
    int connectGeth();

    Ui::MainWindow *ui;
    QAction *walletAction;
    QAction *farmingAction;
    QAction *farmSettingAction;
    QAction *farmScheduleAction;
    QAction *quitAction;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

    FarmSetting *farmSetting;

    QProcess *geth;
    QProcess *ethminer;


protected:
    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
