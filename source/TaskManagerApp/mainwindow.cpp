#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/MyFiles/piton_amblem.png");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText("Work is added.");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_2->setText("Work state is changed.");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit_3->setText("Work is deleted.");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit_4->setText("Work is found.");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit_5->setText("All works are listed.");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_6->setText("All works are listed by period.");
}
