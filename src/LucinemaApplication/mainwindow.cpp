#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CreateMenuBar();

    //Create Main Window layout
    QWidget *central = new QWidget();
    setCentralWidget(central);

    mPtrMainQVBoxLayout = new QVBoxLayout();
    mPtrTopQHBoxLayout = new QHBoxLayout();
    mPtrBottomQHBoxLayout = new QHBoxLayout();
    centralWidget()->setLayout(mPtrMainQVBoxLayout);
    mPtrMainQVBoxLayout->addLayout(mPtrTopQHBoxLayout);
    mPtrMainQVBoxLayout->addLayout(mPtrBottomQHBoxLayout);

    mPtrLeftQVBoxLayout = new QVBoxLayout();
    mPtrRightQVBoxLayout = new QVBoxLayout();
    mPtrTopQHBoxLayout->addLayout(mPtrLeftQVBoxLayout);
    mPtrTopQHBoxLayout->addLayout(mPtrRightQVBoxLayout);
}

void MainWindow::slotOpenActionTriggered()
{
    emit signalOpenMenuTriggered();
}

void MainWindow::AddWidgetToLeftLayout(QWidget *widget)
{
    mPtrLeftQVBoxLayout->addWidget(widget);
    widget->show();
}

void MainWindow::AddWidgetToBottomLayout(QWidget *widget)
{
    mPtrBottomQHBoxLayout->addWidget(widget);
    widget->show();
}

void MainWindow::AddWidgetToRightLayout(QWidget *widget)
{
    mPtrRightQVBoxLayout->addWidget(widget);
    widget->show();
}

void MainWindow::RemoveWidgetFromLeftLayout(QWidget *widget)
{
    widget->hide();
    mPtrLeftQVBoxLayout->removeWidget(widget);
}

void MainWindow::RemoveWidgetFromBottomLayout(QWidget *widget)
{
    widget->hide();
    mPtrBottomQHBoxLayout->removeWidget(widget);
}

void MainWindow::RemoveWidgetFromRightLayout(QWidget *widget)
{
    widget->hide();
    mPtrRightQVBoxLayout->removeWidget(widget);
}

void MainWindow::CreateMenuBar()
{
    mPtrMenuBar = menuBar();
    mPtrFileQMenu = mPtrMenuBar->addMenu(tr("&File"));

    // File Menu
    mPtrOpenQAction = new QAction(tr("&Open"), this);
    mPtrFileQMenu->addAction(mPtrOpenQAction);

    /*
     * Now connect the QActions up to local methods that emit signals
     */
    connect(mPtrOpenQAction,
            SIGNAL(triggered()),
            this,
            SLOT(slotOpenActionTriggered()));
}
