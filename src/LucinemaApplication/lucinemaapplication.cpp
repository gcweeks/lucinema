#include "lucinemaapplication.h"

LucinemaApplication *LucinemaApplication::mInstance = NULL;

LucinemaApplication::LucinemaApplication(int argc, char *argv[]) :
    mQApplication(argc, argv),
    mPtrMainWindow(NULL),
    mPtrTimelineWidget(NULL)
{
/*
 * Create Main Window
 */
    mPtrMainWindow = new MainWindow();

/*
 * Add widgets to main screen. The order they are added here determines the
 * order they appear on the layout.
 */
    SetupCatalogueWidget();
    SetupTimelineWidget();
    SetupViewportWidget();

/*
 * Display Main Window
 */
    mPtrMainWindow->show();
}

LucinemaApplication::~LucinemaApplication()
{
    delete mInstance;
    delete mPtrMainWindow;
    delete mPtrCatalogueWidget;
    delete mPtrTimelineWidget;
    delete mPtrViewportWidget;
}

void LucinemaApplication::SetupCatalogueWidget()
{
    mPtrCatalogueWidget = new CatalogueWidget();
    mPtrMainWindow->AddWidgetToLeftLayout(mPtrCatalogueWidget);
    mPtrCatalogueWidget->setMinimumSize(250,100);
}

void LucinemaApplication::SetupTimelineWidget()
{
    mPtrTimelineWidget = new TimelineWidget();
    mPtrMainWindow->AddWidgetToBottomLayout(mPtrTimelineWidget);
    mPtrTimelineWidget->setMinimumSize(600,100);
}

void LucinemaApplication::SetupViewportWidget()
{
    mPtrViewportWidget = new ViewportWidget();
    mPtrMainWindow->AddWidgetToRightLayout(mPtrViewportWidget);
    mPtrViewportWidget->setMinimumSize(600,450);
}

LucinemaApplication *LucinemaApplication::Instance(int argc, char *argv[])
{
    if (mInstance == NULL) {
        mInstance = new LucinemaApplication(argc, argv);
    }
    return mInstance;
}

int LucinemaApplication::Run()
{
    return mQApplication.exec();
}
