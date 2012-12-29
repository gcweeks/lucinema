#include "videoplayerwidget.h"

#include <QtWidgets>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtMultimedia/QVideoSurfaceFormat>

VideoPlayerWidget::VideoPlayerWidget(QWidget *parent) :
    QWidget(parent),
    mMediaPlayer(0, QMediaPlayer::VideoSurface),
    mPtrPlayPushButton(NULL),
    mPtrPositionSlider(NULL)
{
    mPtrPlayPushButton = new QPushButton;
    mPtrPositionSlider = new QSlider;

    QVideoWidget *tmpVideoWidget = new QVideoWidget;
    mMediaPlayer.setVideoOutput(tmpVideoWidget);

    mPtrPlayPushButton->setText(tr("Play"));

    QVBoxLayout *tmpVLayMain = new QVBoxLayout;
    QHBoxLayout *tmpHLayControls = new QHBoxLayout;
    setLayout(tmpVLayMain);
    tmpVLayMain->addWidget(tmpVideoWidget);
    tmpVLayMain->addLayout(tmpHLayControls);
    tmpHLayControls->addWidget(mPtrPlayPushButton);
    tmpHLayControls->addWidget(mPtrPositionSlider);
}

VideoPlayerWidget::~VideoPlayerWidget()
{
}

void VideoPlayerWidget::slotOpenFile()
{
}

void VideoPlayerWidget::slotPlay()
{
}

void VideoPlayerWidget::slotMediaStateChanged(QMediaPlayer::State state)
{
}

void VideoPlayerWidget::slotPositionChanged(qint64 position)
{
}

void VideoPlayerWidget::slotDurationChanged(qint64 duration)
{
}

void VideoPlayerWidget::slotSetPosition(int position)
{
}
