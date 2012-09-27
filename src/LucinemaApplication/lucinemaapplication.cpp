#include "lucinemaapplication.h"

LucinemaApplication *LucinemaApplication::mInstance = NULL;

LucinemaApplication::LucinemaApplication(int argc, char *argv[]) :
    mQApplication(argc, argv),
    mPtrMainWindow(NULL)
{
/*
 * Create Main Window
 */
    mPtrMainWindow = new MainWindow();

/*
 * Display Main Window
 */
    mPtrMainWindow->show();
}

LucinemaApplication::~LucinemaApplication()
{
    delete mInstance;
    delete mPtrMainWindow;
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
