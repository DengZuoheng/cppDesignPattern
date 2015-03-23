#include "singleton.h"

static Singleton& Singleton::instance()
{
    static Singleton instance;
    return instance;
}

Singleton::Singleton()
{

}

/******************************************************************************
reference:
[1]:http://preshing.com/20130930/double-checked-locking-is-fixed-in-cpp11/
[2]:http://en.wikipedia.org/wiki/Double-checked_locking
******************************************************************************/