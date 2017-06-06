#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void play();

private slots:
    void on_playButton_clicked();
    void on_frameSpinBox_valueChanged(int arg1);

    void on_action_Open_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *video_label;
    std::string video_filepath;
    cv::VideoCapture cap;
    int frame_count;
};

#endif // MAINWINDOW_H
