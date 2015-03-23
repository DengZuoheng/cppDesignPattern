#ifndef SINGLETON_H
#define SINGLETON_H

#if defined(_MSC_VER)
#if _MSC_VER < 1800 
    #error This project needs atleast Visual Studio 2013
#endif
#else __cplusplus <= 199711L
    #error This project can only be compiled with a compiler that supports C++11
#endif

class Singleton
{
public:
    static Singleton& instance();
private:
    Singleton();
}