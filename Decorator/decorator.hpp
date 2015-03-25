#ifndef DECORATOR_H
#define DECORATOR_H
#include "component.h"
#include <iostream>
class decorator:public component
{
public:
    decorator() :component(){}
    virtual int method()=0;
    virtual ~decorator(){ std::cout << "~decorator" << std::endl; };
};

#endif