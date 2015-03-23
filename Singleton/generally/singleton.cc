#include "singleton.h"

static Singleton* Singleton::instance()
{
    if(__instance==NULL)
    {
        __instance=new Singleton();
    }
    return __instance;
}

Singleton::Singleton():foo(0),__foobar(0.0)
{
    //TODO
}

int Singleton::bar()
{
    return foo+foobar();
}

double Singleton::foobar()
{
    return __foobar;
}