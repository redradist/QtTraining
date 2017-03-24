#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private slots:
    void on_messageBoxPushButton_clicked();

    void on_integerPushButton_clicked();

    void on_filePushButton_clicked();

    void on_colorPushButton_clicked();

private:
    Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
