#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
class component
{
public:
    component(){}
    virtual int method()=0;
    virtual void set_member(int) = 0;
    virtual ~component(){ std::cout << "~component" << std::endl; };
};

#endif