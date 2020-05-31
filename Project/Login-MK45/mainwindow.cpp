#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QFile>

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

void MainWindow::on_pushButton_login_clicked()
{
   QString username = ui->lineEdit_username->text();
   QString password = ui->lineEdit_password->text();

   if (username == "test" && password == "test")
   {
       QMessageBox::information(this, "Login", "Username and password is correct");
       system ("start F:\\Project\\projectX.exe");
   } else {
       QMessageBox::information(this, "Login", "Username and password are incorrect");
   }
}
