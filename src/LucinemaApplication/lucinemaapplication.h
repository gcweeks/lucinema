#ifndef LUCINEMAAPPLICATION_H
#define LUCINEMAAPPLICATION_H

#include <QtGui/QApplication>

#include "mainwindow.h"

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

public:
    //Getters
    static LucinemaApplication *Instance(int argc, char *argv[]);

    //Methods
    int Run();
};

#endif // LUCINEMAAPPLICATION_H
