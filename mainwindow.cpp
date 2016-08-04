#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    geth(0),
    ethminer(0)
{
    QIcon icon(":/icon/icon.ico");
    ui->setupUi(this);
    setWindowIcon(icon);
    farmSetting = new FarmSetting(this);
    createActions();
    createTrayIcon();    
    trayIcon->show();

    qApp->setQuitOnLastWindowClosed(false);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete walletAction;
    delete farmingAction;
    delete farmSettingAction;
    delete quitAction;
    delete trayIcon;
    delete trayIconMenu;
    delete farmSetting;
    delete geth;
    delete ethminer;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(trayIcon->isVisible())
    {
        hide();
        event->ignore();
    }
}

void MainWindow::openFarmWindow()
{
   farmSetting->show();
}

void MainWindow::createActions()
{
    walletAction = new QAction(tr("&Wallet"), this);
    connect(walletAction, SIGNAL(triggered()), this, SLOT(showNormal()) );

    farmingAction = new QAction(tr("&Farm Now"), this);
    farmingAction->setCheckable(true);
    connect(farmingAction, SIGNAL(triggered()), this, SLOT(manageFarming()) );

    farmSettingAction = new QAction(tr("&Farm Setting..."), this);
    connect(farmSettingAction, SIGNAL(triggered()), this, SLOT(openFarmWindow()) );

    farmScheduleAction = new QAction(tr("&Farm Schedule..."), this);
    connect(farmSettingAction, SIGNAL(triggered()), this, SLOT(openFarmWindow()) );

    quitAction = new QAction(tr("&Exit"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()) );
    //QDesktopServices::openUrl(QUrl("file:///"+filename, QUrl::TolerantMode));
}

void MainWindow::createTrayIcon()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(walletAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(farmingAction);
    trayIconMenu->addAction(farmSettingAction);
    trayIconMenu->addAction(farmScheduleAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);

    trayIcon = new QSystemTrayIcon(this);
    QIcon icon(":/icon/icon.ico");
    trayIcon->setIcon(icon);;
    trayIcon->setContextMenu(trayIconMenu);

}

bool MainWindow::runGeth()
{ // BUG: if geth is already running program crashes and exits
    if(farmingAction->isChecked())
    {
        if(geth != NULL) delete geth; //error check
        QStringList arg;
        arg << "--rpc";
        geth = new QProcess(parent());
        geth->start("./geth",arg);
        return true;
    }
    else
        delete geth;
    return false;
}

bool MainWindow::runEthminer()
{
    if(farmingAction->isChecked())
    {
        if(ethminer != NULL) delete ethminer; //error check
        QStringList arg;

        switch(farmSetting->selection())
        {
        case 0:
            QMessageBox::information(this, tr("TET"), tr("Error"));
            break;

        case 2:
            arg << "-G";
            break;

        case 3:
            QString tgpu = "-G t ";
            tgpu += QString::number(farmSetting->totalGPU());
            arg << tgpu;
            break;
        }

        ethminer = new QProcess(parent());
        ethminer->start("./ethminer",arg);
        return true;
    }
    else
        delete ethminer;
    return false;
}

void MainWindow::manageFarming()
{
    bool bl_geth, bl_ethminer;
    bl_geth = runGeth();
    bl_ethminer = runEthminer();
    if(bl_geth && bl_ethminer)
        farmingAction->setText("Farming");
    else
        farmingAction->setText("Farm Now");
}

int MainWindow::connectGeth()
{
    //QString arg="http://localhost:8545";
    //QJsonRpcHttpClient client("");
    //client.setEndPoint("http://localhost:8545");
    //QStringList arg;
   // arg << "eth_coinbase";

    //QJsonRpcMessage message = QJsonRpcMessage::createRequest("eth_coinbase");
    //JsonRpcMessage response = client.sendMessageBlocking(message);
    /*if (response.type() == QJsonRpcMessage::Error) {
        qDebug() << response.errorData();
        return -1;
    }

    qDebug() << response.toJson();*/
    return 0;
}

