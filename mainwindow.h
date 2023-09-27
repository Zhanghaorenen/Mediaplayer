#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mediaplayer.h"
#include<QString>
#include<QListWidgetItem>
#include<QMediaPlayer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_addlist_triggered();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);


    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_nextaudiobtn_clicked();

signals:
    void playrequst();
    void pauserequest();
private:
    Ui::MainWindow *ui;
    mediaplayer play;
    QStringList selectedFiles;
    int currentindex;


};
#endif // MAINWINDOW_H
