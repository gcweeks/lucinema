#ifndef LUCINEMAAPPLICATION_H
#define LUCINEMAAPPLICATION_H

#include <QtGui/QApplication>

#include "mainwindow.h"
#include "../Catalogue/cataloguewidget.h"
#include "../Timeline/timelinewidget.h"
#include "../Viewport/viewportwidget.h"

class LucinemaApplication
{
private:
    //Ctor
    LucinemaApplication(int argc, char *argv[]);

    //Dtor
    ~LucinemaApplication();

    //Variables
    static LucinemaApplication *mInstance;
    QApplication mQApplication;
    MainWindow *mPtrMainWindow;
    CatalogueWidget *mPtrCatalogueWidget;
    TimelineWidget *mPtrTimelineWidget;
    ViewportWidget *mPtrViewportWidget;

    //Methods
    void SetupCatalogueWidget();
    void SetupTimelineWidget();
    void SetupViewportWidget();

public:
    //Getters
    static LucinemaApplication *Instance(int argc, char *argv[]);
    //Widget Getters
    CatalogueWidget *PtrCatalogueWidget() {
        return mPtrCatalogueWidget;
    }
    TimelineWidget *PtrTimelineWidget() {
        return mPtrTimelineWidget;
    }
    ViewportWidget *PtrViewportWidget() {
        return mPtrViewportWidget;
    }

    //Methods
    int Run();
};

#endif // LUCINEMAAPPLICATION_H
