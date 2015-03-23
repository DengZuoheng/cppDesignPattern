#ifndef SINGLETON_H
#define SINGLETON_H
class Singleton 
{
public:
    static volatile Singleton* volatile instance();
private:
// one more volatile added
    static Singleton* volatile __instance;
private:
    //私有的构造函数
    Singleton();
};

/******************************************************************************
reference:
[1]:Scott Meyers ,Andrei Alexandrescu. C++ and the Perils of Double-Checked 
Locking. sep. 2004
******************************************************************************/