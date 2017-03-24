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
    void on_inputFilePushButton_clicked();

    void on_outputFilePushButton_clicked();

    void on_convertPushButton_clicked();

private:
    class QThread *readerThread;
    class QThread *writerThread;
    Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
