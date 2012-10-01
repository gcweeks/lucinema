#ifndef CATALOGUEWIDGET_H
#define CATALOGUEWIDGET_H

#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class CatalogueWidget : public QWidget {
    Q_OBJECT
private:
    QFrame *mPtrMainQFrame;
    QVBoxLayout *mPtrCenterWidgetLayout;
    QVBoxLayout *mPtrMainQVBoxLayout;
    QLabel *mPtrTitleQLabel;

public:
    CatalogueWidget();
};

#endif //CATALOGUEWIDGET_H
