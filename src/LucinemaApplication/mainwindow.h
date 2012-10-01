#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMenuBar>

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void signalOpenMenuTriggered();

private:
    //Methods
    void CreateMenuBar();

    //Variables
    QVBoxLayout *mPtrMainQVBoxLayout;
    QHBoxLayout *mPtrTopQHBoxLayout;
    QHBoxLayout *mPtrBottomQHBoxLayout;
    QVBoxLayout *mPtrLeftQVBoxLayout;
    QVBoxLayout *mPtrRightQVBoxLayout;
    QMenuBar *mPtrMenuBar;
    QMenu *mPtrFileQMenu;
    QAction *mPtrOpenQAction;

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
