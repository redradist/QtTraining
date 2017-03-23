#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Mouse Position");
    this->setMouseTracking(true);
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::event(QEvent *event)
{
    ui->xLineEdit->setText(QString::number(event->pos().x()));
    ui->yLineEdit->setText(QString::number(event->pos().y()));
    return QWidget::event(event);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    ui->xLineEdit->setText(QString::number(event->pos().x()));
    ui->yLineEdit->setText(QString::number(event->pos().y()));
    QWidget::mouseMoveEvent(event);
}
