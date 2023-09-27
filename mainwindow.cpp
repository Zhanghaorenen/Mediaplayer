#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QObject>
#include<QDebug>
#include<QMediaPlayer>
#include<QAudioOutput>
#include<mediaplayer.h>
#include<QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //connect(this,SIGNAL(playrequst()),&play,SLOT(mediaplaystart()));

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//播放键
{

    //emit playrequst();

    play.mediaplaystart(selectedFiles[currentindex]);
    if(play.player.playbackState()==QMediaPlayer::StoppedState)
        on_nextaudiobtn_clicked();

}


void MainWindow::on_pushButton_2_clicked()//暂停键
{
    play.mediaplaypause();
}


void MainWindow::on_addlist_triggered()//添加文件夹列表
{
    QString folderPath = QFileDialog::getExistingDirectory(0, "Select a folder", QDir::homePath());

    if (!folderPath.isEmpty()) {
        qDebug() << "Selected folder: " << folderPath;

         selectedFiles = QFileDialog::getOpenFileNames(0, "Select one or more files", folderPath);

        qDebug() << "Selected files:";

        foreach (const QString &fileName, selectedFiles) {
            qDebug() << fileName;
        }
    }
    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

}



void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    ui->listWidget->clear();
    ui->listWidget->addItems(selectedFiles);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
     connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),&play,SLOT(setvolunmn(int)));
}

void MainWindow::on_nextaudiobtn_clicked()
{

}


