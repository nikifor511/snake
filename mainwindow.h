#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QLinearGradient>
#include "game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    snake *mySnake;

private:
    Ui::MainWindow *ui;

protected:
    void paintEvent(QPaintEvent *event);
    int flag;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
