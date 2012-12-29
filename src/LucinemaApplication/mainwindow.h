#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMenuBar>

#include "videoplayerwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void signalOpenMenuTriggered();

private:
    //Methods
    void CreateMenuBar();

    //Layouts
    QVBoxLayout *mPtrMainQVBoxLayout;
    QHBoxLayout *mPtrTopQHBoxLayout;
    QHBoxLayout *mPtrBottomQHBoxLayout;
    QVBoxLayout *mPtrLeftQVBoxLayout;
    QVBoxLayout *mPtrRightQVBoxLayout;

    //Menu Bar
    QMenuBar *mPtrMenuBar;

    //Menus
    QMenu *mPtrFileQMenu;
    QMenu *mPtrEditQMenu;
    QMenu *mPtrHelpQMenu;

    //Actions
    QAction *mPtrNewQAction;
    QAction *mPtrOpenQAction;
    QAction *mPtrSaveQAction;
    QAction *mPtrSaveAsQAction;
    QAction *mPtrImportQAction;
    QAction *mPtrExitQAction;

    QAction *mPtrCopyQAction;
    QAction *mPtrCutQAction;
    QAction *mPtrPasteQAction;
    QAction *mPtrGoToQAction;
    QAction *mPtrSplitQAction;
    QAction *mPtrDeleteQAction;

    QAction *mPtrAboutQAction;

    //Widgets
    VideoPlayerWidget *mPtrVideoPlayerWidget;

private slots:
    void slotOpenActionTriggered();
    
public:
    //Ctor
    MainWindow(QWidget *parent = 0);

    //Methods
    void AddWidgetToLeftLayout(QWidget *widget);
    void AddWidgetToRightLayout(QWidget *widget);
    void AddWidgetToBottomLayout(QWidget *widget);
    void RemoveWidgetFromLeftLayout(QWidget *widget);
    void RemoveWidgetFromRightLayout(QWidget *widget);
    void RemoveWidgetFromBottomLayout(QWidget *widget);
};

#endif // MAINWINDOW_H
