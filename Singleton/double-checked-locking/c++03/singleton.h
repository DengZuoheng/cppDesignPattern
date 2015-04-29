#ifndef SINGLETON_H
#define SINGLETON_H
#include <boost/thread.hpp>
class singleton 
{
public:
    static volatile singleton* volatile instance();
private:
// one more volatile added
    static volatile singleton* volatile __instance;
    static boost::mutex __mtx;
private:
    //私有的构造函数
    singleton();
};

#endif
/******************************************************************************
reference:
[1]:scott Meyers ,Andrei Alexandrescu. C++ and the Perils of Double-Checked 
Locking. sep. 2004
******************************************************************************/