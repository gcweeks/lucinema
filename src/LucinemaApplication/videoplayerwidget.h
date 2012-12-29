#ifndef VIDEOPLAYERWIDGET_H
#define VIDEOPLAYERWIDGET_H

#include <QtMultimedia/QMediaPlayer>
#include <QtWidgets/QWidget>
#include <QtGui/QMovie>
#include <QVBoxLayout>
#include <QHBoxLayout>

QT_BEGIN_NAMESPACE
class QAbstractButton;
class QSlider;
QT_END_NAMESPACE


class VideoPlayerWidget : public QWidget
{
    Q_OBJECT
public:
    VideoPlayerWidget(QWidget *parent = 0);
    ~VideoPlayerWidget();

public slots:
    void slotOpenFile();
    void slotPlay();

private slots:
    void slotMediaStateChanged(QMediaPlayer::State state);
    void slotPositionChanged(qint64 position);
    void slotDurationChanged(qint64 duration);
    void slotSetPosition(int position);

private:
    QMediaPlayer mMediaPlayer;
    QAbstractButton *mPtrPlayPushButton;
    QSlider *mPtrPositionSlider;
};

#endif // VIDEOPLAYERWIDGET_H
