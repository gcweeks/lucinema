#ifndef TIMELINEWIDGET_H
#define TIMELINEWIDGET_H

#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
