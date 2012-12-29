#ifndef VIDEOPLAYERWIDGET_H
#define VIDEOPLAYERWIDGET_H

#include <QWidget>
#include <QMovie>
#include <QAbstractButton>
#include <QSlider>
#include <qmediaplayer.h>


class VideoPlayerWidget : public QWidget
{
    Q_OBJECT
public:
    VideoPlayerWidget(QWidget *parent = 0);
    ~VideoPlayer();

public slots:
    void openFile();
    void play();

private slots:
    void mediaStateChanged(QMediaPlayer::State state);
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void setPosition(int position);

private:
    QMediaPlayer mediaPlayer;
    QAbstractButton *playButton;
    QSlider *positionSlider;
};

#endif // VIDEOPLAYERWIDGET_H
