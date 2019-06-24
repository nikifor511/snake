#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    flag = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter.setBrush(QBrush(Qt::green, Qt::RadialGradientPattern));
    int i;
    for (i=0; i<=area_width; i++)
        painter.drawLine(area_delta + i*cell_width, area_delta, area_delta + i*cell_width, area_delta + area_height*cell_height);
    for (i=0; i<=area_height; i++)
        painter.drawLine(area_delta, area_delta + i*cell_height, area_delta + area_width*cell_width, area_delta + i*cell_height);
//    for (i=0; i<mySnake->get_length(); i++)
//        painter.drawEllipse(area_delta + () )


}

void MainWindow::on_pushButton_clicked()
{
    point h;
    h.x = 15;
    h.y = 7;
//    A[0].x = 2;
//    A[0].y = 2;
//    A[1].x = 2;
//    A[1].y = 3;
//    A[2].x = 2;
//    A[2].y = 4;

    snake mySnake  = snake(8, h, 3);
    int f = 9;


}
