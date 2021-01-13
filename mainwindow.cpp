#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_uncheckAButton_clicked()
{
    // does nothing
    ui->radioA->setChecked(false);
}

void MainWindow::on_checkAButton_clicked()
{
    ui->radioA->setChecked(true);
}

void MainWindow::on_uncheckBButton_clicked()
{
    // does nothing
    ui->radioB->setChecked(false);
}

void MainWindow::on_checkBButton_clicked()
{
    ui->radioB->setChecked(true);
}
