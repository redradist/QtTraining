#include "mainwidget.h"
#include "ui_mainwidget.h"

#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_messageBoxPushButton_clicked()
{
    // TODO: show any text with message box
}

void MainWidget::on_integerPushButton_clicked()
{
    // TODO: create dialog and get user input
    // TODO: set text of integerLineEdit
}

void MainWidget::on_filePushButton_clicked()
{
    // TODO: create dialog and get user input
    // TODO: set text of fileLineEdit
}

void MainWidget::on_colorPushButton_clicked()
{
    // TODO: create dialog and get user input
    // TODO: set text of colorLineEdit
}
