#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel(this);
    label->setText("Hello World!");
    label->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
