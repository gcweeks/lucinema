#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    mPtrVideoPlayerWidget(NULL)
{
    CreateMenuBar();
    mPtrVideoPlayerWidget = new VideoPlayerWidget(this);
    //Create Main Window layout
    QWidget *central = new QWidget();
    setCentralWidget(central);

    mPtrMainQVBoxLayout = new QVBoxLayout();
    mPtrMainQVBoxLayout->addWidget(mPtrVideoPlayerWidget);
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
    mPtrEditQMenu = mPtrMenuBar->addMenu(tr("&Edit"));
    mPtrHelpQMenu = mPtrMenuBar->addMenu(tr("&Help"));

    // File Menu
    mPtrNewQAction = new QAction(tr("&New"), this);
    mPtrOpenQAction = new QAction(tr("&Open"), this);
    mPtrSaveQAction = new QAction(tr("&Save"), this);
    mPtrSaveAsQAction = new QAction(tr("Save as..."), this);
    mPtrImportQAction = new QAction(tr("&Import"), this);
    mPtrExitQAction = new QAction(tr("&Exit"), this);
    mPtrFileQMenu->addAction(mPtrNewQAction);
    mPtrFileQMenu->addAction(mPtrOpenQAction);
    mPtrFileQMenu->addAction(mPtrSaveQAction);
    mPtrFileQMenu->addAction(mPtrSaveAsQAction);
    mPtrFileQMenu->addAction(mPtrImportQAction);
    mPtrFileQMenu->addAction(mPtrExitQAction);

    // Edit Menu
    mPtrCopyQAction = new QAction(tr("Copy"), this);
    mPtrCutQAction = new QAction(tr("Cut"), this);
    mPtrPasteQAction = new QAction(tr("Paste"), this);
    mPtrGoToQAction = new QAction(tr("Go to..."), this);
    mPtrSplitQAction = new QAction(tr("Split"), this);
    mPtrDeleteQAction = new QAction(tr("Delete"), this);
    mPtrEditQMenu->addAction(mPtrCopyQAction);
    mPtrEditQMenu->addAction(mPtrCutQAction);
    mPtrEditQMenu->addAction(mPtrPasteQAction);
    mPtrEditQMenu->addAction(mPtrGoToQAction);
    mPtrEditQMenu->addAction(mPtrSplitQAction);
    mPtrEditQMenu->addAction(mPtrDeleteQAction);

    // Help Menu
    mPtrAboutQAction = new QAction(tr("&About"), this);
    mPtrHelpQMenu->addAction(mPtrAboutQAction);

    /*
     * Now connect the QActions up to local methods that emit signals
     */
    connect(mPtrOpenQAction,
            SIGNAL(triggered()),
            this,
            SLOT(slotOpenActionTriggered()));
}
