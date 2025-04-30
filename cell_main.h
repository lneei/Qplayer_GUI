#ifndef CELL_MAIN_H
#define CELL_MAIN_H
#include <QWidget>
#include<QUrl>

class QAudioOutput;
class QMediaPlayer;

QT_BEGIN_NAMESPACE
namespace Ui {
class MusicPlay;
}
QT_END_NAMESPACE

class Cell_Main : public QWidget
{
    Q_OBJECT

public:
    Cell_Main(QWidget *parent = nullptr);
    ~Cell_Main();

private slots:
    void on_file_btn_clicked();

    void on_start_btn_clicked();

    void on_refund_btn_clicked();

    void on_up_btn_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_volume_valueChanged(int value);

    void on_volume_btn_clicked();


private:
    Ui::MusicPlay *ui;
    QList<QUrl> playList;
    int curPlayIndex=0;//播放下标
    QAudioOutput* audioOutput;
    QMediaPlayer* mediaplayer;
};
#endif // CELL_MAIN_H
