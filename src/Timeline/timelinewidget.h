#ifndef TIMELINEWIDGET_H
#define TIMELINEWIDGET_H

#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class TimelineWidget : public QWidget {
    Q_OBJECT
private:
    QFrame *mPtrMainQFrame;
    QVBoxLayout *mPtrCenterWidgetLayout;
    QVBoxLayout *mPtrMainQVBoxLayout;
    QLabel *mPtrTitleQLabel;

public:
    TimelineWidget();
};

#endif //TIMELINEWIDGET_H
