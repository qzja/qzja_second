#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::PaintEvent(QPaintEvent *)
//{
//    QPainter painter(this);
//    QPixmap pix;
//    pix.load(":/resource/startWidget.png");
//    painter.drawPixmap(0, 0, this -> width(), this -> height(), pix);//使图片适应窗口比例

//}
