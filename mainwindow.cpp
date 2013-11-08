#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    siouxIcon.load(":/images/images/SiouxIcon.png");
    setWindowTitle("Sioux Video Wall v2.0");
    setWindowIcon(QIcon(siouxIcon));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playPauseButton_clicked()
{
    if (isPlaying){
        ui->playPauseButton->setText("Play");
        isPlaying=false;
    }else{
        ui->playPauseButton->setText("Pause");
        isPlaying=true;
    }
}
