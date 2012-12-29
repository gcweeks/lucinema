#include "videoplayerwidget.h"

#include <QtWidgets>
#include <QtMultimediaWidgets/QVideoWidget>

VideoPlayerWidget::VideoPlayerWidget(QWidget *parent) :
    QWidget(parent),
    mMediaPlayer(NULL),
    mPtrPlayPushButton(NULL),
    mPtrPositionSlider(NULL)
{
    mMainVBoxLayout = new QVBoxLayout;
    setLayout(mMainVBoxLayout);

    mControlsHBoxLayout = new QHBoxLayout;
    mControlsHBoxLayout->setMargin(0);

    mMediaPlayer = new QMediaPlayer(0, QMediaPlayer::VideoSurface);
    mPtrPlayPushButton = new QPushButton;
    mPtrPositionSlider = new QSlider;
    QVideoWidget *tmpVideoWidget = new QVideoWidget;

    mMainVBoxLayout->addWidget(tmpVideoWidget);
    mMainVBoxLayout->addLayout(mControlsHBoxLayout);
//    mControlsHBoxLayout->addWidget(openButton);
    mControlsHBoxLayout->addWidget(mPtrPlayPushButton);
    mControlsHBoxLayout->addWidget(mPtrPositionSlider);

    mMediaPlayer->setVideoOutput(tmpVideoWidget);

    mPtrPlayPushButton->setEnabled(false);
    mPtrPlayPushButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));

    mPtrPositionSlider = new QSlider(Qt::Horizontal);
    mPtrPositionSlider->setRange(0, 0);


    connect(mPtrPlayPushButton, SIGNAL(clicked()), this, SLOT(slotPlay()));
    connect(mMediaPlayer, SIGNAL(stateChanged(QMediaPlayer::State)), this,
        SLOT(slotMediaStateChanged(QMediaPlayer::State)));
    connect(mMediaPlayer, SIGNAL(positionChanged(qint64)), this,
        SLOT(slotPositionChanged(qint64)));
    connect(mMediaPlayer, SIGNAL(durationChanged(qint64)), this,
        SLOT(slotDurationChanged(qint64)));
    connect(mPtrPositionSlider, SIGNAL(sliderMoved(int)), this,
        SLOT(slotSetPosition(int)));
}

VideoPlayerWidget::~VideoPlayerWidget()
{
}

//void VideoPlayerWidget::slotOpenFile()
//{
//}

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
