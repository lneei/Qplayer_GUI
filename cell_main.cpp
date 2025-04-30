#include "cell_main.h"
#include "ui_cell_main.h"
#include<QDebug>
#include<QFileDialog>
#include<QDir>
#include<QMediaPlayer>
#include<QAudioOutput>
#include<QUrl>
#include<QAudioOutput>
#include<QPushButton>
Cell_Main::Cell_Main(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicPlay)
{
    ui->setupUi(this);
    audioOutput =new QAudioOutput(this);//输出对象
    mediaplayer =new QMediaPlayer(this);//媒体对象
    mediaplayer->setAudioOutput(audioOutput);//将输入对象交给媒体对象

    //给播放器设置音乐
    // mediaPlayer->setSource(QUrl::fromLocalFile("C:/Users/20691/Music/1/Baby, Don't Cry (인어의 눈물) .mp3"));
    // //播放
    // mediaPlayer->play();

    //获取当前媒体的时长 通过信号和槽获取
    connect(mediaplayer,&QMediaPlayer::durationChanged,this,[=](qint64 duration)
    {
        ui->total_lab->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60));
        //设置滑动条为0
        ui->progress->setRange(0,duration);
    });
    //获取当前时长
    connect(mediaplayer,&QMediaPlayer::positionChanged,this,[=](qint64 pos)
    {
        //2,10,QChar('0') 几位几机制用几填充
        ui->cur_lab->setText(QString("%1:%2").arg(pos/1000/60,2,10,QChar('0')).arg(pos/1000%60));
        ui->progress->setValue(pos);//跟着播放改变滑动条
    });

    //拖动滑块。让音乐播放进度改变
    connect(ui->progress,&QSlider::sliderMoved,mediaplayer,&QMediaPlayer::setPosition);
    //设置音量初始值
    audioOutput->setVolume(0.5);


}
Cell_Main::~Cell_Main()
{
    delete ui;
}
void Cell_Main::on_file_btn_clicked()
{
    auto path=QFileDialog::getExistingDirectory(this,"请选择音频所在目录","C:");
    //根据这个路径,获取里面的所有MP3、wav文件
    QDir dir(path);
    auto MusicList=dir.entryList(QStringList()<<"*.mp3"<<"*.wav");//获取满足规则的文件
    //把音乐名字放到listwidget显示
    ui->listWidget->addItems(MusicList);
    //默认选中第一个音乐
    ui->listWidget->setCurrentRow(0);
    //把音乐路径保存起来
    for(auto file:MusicList)
        playList.append(QUrl::fromLocalFile(path+"/"+file));
}

void Cell_Main::on_start_btn_clicked()
{
    if(playList.empty())//未选中点击后错误处理
    {
        return;
    }

    switch (mediaplayer->playbackState())
    {
        case QMediaPlayer::PlaybackState::StoppedState:
        {
            //1获取选中的行号
            curPlayIndex=ui->listWidget->currentRow();
            //2播放对应下标的音乐
            mediaplayer->setSource(playList[curPlayIndex]);
            mediaplayer->play();
            break;
        }
        case QMediaPlayer::PlaybackState::PlayingState:
            //如果正在播放,暂停音乐
            mediaplayer->pause();
            ui->start_btn->setStyleSheet("border-image: url(:/img/suspended.svg);");
            break;
        case QMediaPlayer::PlaybackState::PausedState:
            //如果暂停，继续播放
            mediaplayer->play();
            ui->start_btn->setStyleSheet("border-image: url(:/img/start.svg);");
            break;
    }
}

void Cell_Main::on_refund_btn_clicked()
{
    //如果下标为0则返回0防止出错
    if(curPlayIndex==0)
    {
        curPlayIndex=0;
    }
    else
    {
        curPlayIndex=(curPlayIndex-1)%playList.size();
    }
    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaplayer->setSource(playList[curPlayIndex]);
    mediaplayer->play();
}

void Cell_Main::on_up_btn_clicked()
{
    // curPlayIndex++;
    // if(curPlayIndex>=playList.size())//防止下标越界
    // {
    //     curPlayIndex=0;
    // }
    curPlayIndex=(curPlayIndex+1)%playList.size();//简化版
    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaplayer->setSource(playList[curPlayIndex]);
    mediaplayer->play();
}


void Cell_Main::on_listWidget_doubleClicked(const QModelIndex &index)
{
    curPlayIndex=index.row();
    mediaplayer->setSource(playList[curPlayIndex]);
    mediaplayer->play();
}

void Cell_Main::on_volume_valueChanged(int value)
{
    audioOutput->setVolume(value/100.0);
}

void Cell_Main::on_volume_btn_clicked()
{
    if (audioOutput->isMuted()) {
        audioOutput->setMuted(false);
        ui->volume_btn->setStyleSheet("border-image: url(:/img/voice.svg);");
    } else {
        audioOutput->setMuted(true);
        ui->volume_btn->setStyleSheet("border-image: url(:/img/mute.svg);");
    }
    // audioOutput->setVolume(0);
}



