#include "lucinemaapplication.h"

int main(int argc, char *argv[])
{
    LucinemaApplication *tmpPtrLucinemaApplication =
        LucinemaApplication::Instance(argc, argv);
    return tmpPtrLucinemaApplication->Run();
}
