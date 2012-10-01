#include "timelinewidget.h"

TimelineWidget::TimelineWidget() {
    
    mPtrCenterWidgetLayout = new QVBoxLayout(this);
    setLayout(mPtrCenterWidgetLayout);

    mPtrMainQFrame = new QFrame(this);
    mPtrCenterWidgetLayout->addWidget(mPtrMainQFrame);

    mPtrMainQVBoxLayout = new QVBoxLayout();
    mPtrMainQFrame->setLayout(mPtrMainQVBoxLayout);
    mPtrMainQFrame->setFrameStyle(QFrame::Panel | QFrame::Plain);

    mPtrTitleQLabel = new QLabel(tr("Timeline"), this);
    mPtrTitleQLabel->setMaximumHeight(50);
    mPtrTitleQLabel->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    mPtrTitleQLabel->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);

    mPtrMainQVBoxLayout->addWidget(mPtrTitleQLabel);
}
