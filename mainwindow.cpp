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

    QLinearGradient linearGrad(QPointF(10, 10), QPointF(200, 200));
    linearGrad.setColorAt(0, Qt::white);
    linearGrad.setColorAt(0.5, Qt::green);
    linearGrad.setColorAt(1, Qt::black);
    painter.setBrush(linearGrad);

    for (int i=0; i<=area_width; i++)
        painter.drawLine(area_delta + i*cell_width, area_delta, area_delta + i*cell_width, area_delta + area_height*cell_height);
    for (int i=0; i<=area_height; i++)
        painter.drawLine(area_delta, area_delta + i*cell_height, area_delta + area_width*cell_width, area_delta + i*cell_height);
//    for (i=0; i<mySnake->get_length(); i++)
//        painter.drawEllipse(area_delta + () )

    if (&myGame != nullptr)
        for (int i=0; i<area_width; i++)
            for (int j=0; j<area_height; j++)
            {
                if (myGame->gameArray[i][j] == Snake_M)
                    painter.drawEllipse(area_delta + i*cell_width, area_delta + j*cell_height, area_delta + (i+1)*cell_width,  area_delta + (j+1)*cell_height);

            }
}

void MainWindow::on_pushButton_clicked()
{
    myGame = new game();
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    timer->start(500);
}

void MainWindow::slotTimerAlarm()
{

    myGame->fill_gameArray();
    repaint();
}
