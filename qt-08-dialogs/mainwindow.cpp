#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QFileDialog>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   QMessageBox::information(this, "Hello", "Hello World!", QMessageBox::Ok);
   int result = QInputDialog::getInt(this, "Value input", "Please input integer");
   findChild<QLineEdit *>("integerLineEdit")->setText(QString::number(result));

   QString fileName = QFileDialog::getOpenFileName(this,
                                                   tr("Open File"),
                                                   "",
                                                   tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
   findChild<QLineEdit *>("fileLineEdit")->setText(fileName);

   QColor color = QColorDialog::getColor();
   findChild<QLineEdit *>("colorLineEdit")->setText(color.name());
}

MainWindow::~MainWindow()
{
   delete ui;
}
