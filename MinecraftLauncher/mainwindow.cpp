#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

