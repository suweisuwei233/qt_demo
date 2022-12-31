#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/mat.hpp>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QT + OpenCV4");
    Mat src = imread("/home/suweisuwie/c++/26_demo_opencv/demo.jpg");
    Mat img;
    cvtColor(src, img, COLOR_BGR2RGB);
    ui->label->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
}
MainWindow::~MainWindow()
{
    delete ui;
}

