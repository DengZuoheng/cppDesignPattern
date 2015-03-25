#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H
#include "component.h"

class concrete_component : public component
{
public:
    concrete_component();
    virtual int method();
    virtual ~concrete_component();
    void set_member(int);
private:
    int __member;
};

#endif