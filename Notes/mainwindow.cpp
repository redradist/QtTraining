#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    blockSignals(true);
    QString sfsfds = name;
}

MainWindow::~MainWindow()
{
    delete ui;
}
