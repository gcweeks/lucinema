#ifndef VIEWPORTWIDGET_H
#define VIEWPORTWIDGET_H

#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class ViewportWidget : public QWidget {
    Q_OBJECT
private:
    QFrame *mPtrMainQFrame;
    QVBoxLayout *mPtrCenterWidgetLayout;
    QVBoxLayout *mPtrMainQVBoxLayout;
    QLabel *mPtrTitleQLabel;

public:
    ViewportWidget();
};

#endif //VIEWPORTWIDGET_H
