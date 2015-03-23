#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton* instance();
private:
    //私有的构造函数
    Singleton();
private:
    //私有的实例指针
    static Singleton* __instance;
public:
    //一些公有成员
    int foo;
    int bar();
    //一些私有成员
private:
    double __foobar;
    double foobar();
};

#endif