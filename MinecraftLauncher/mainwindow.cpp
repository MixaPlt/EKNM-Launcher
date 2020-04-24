#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopServices"
#include "QUrl"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->loginLineEdit->setTextMargins(5,0,5,0);
    ui->passwordLineEdit->setTextMargins(5,0,5,0);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, QColor(0,0,0,120));
    ui->widget->setAutoFillBackground(true);
    ui->widget->setPalette(pal);
    ui->titleLabel->setStyleSheet("QLabel { color : white; }");
    connect(ui->siteButton, SIGNAL (released()), this, SLOT (visitSiteButtonPressed()));
}

void MainWindow::visitSiteButtonPressed()
{
    QString link = "http://eknm.net";
    QDesktopServices::openUrl(QUrl(link));
}

MainWindow::~MainWindow()
{
    delete ui;
}

