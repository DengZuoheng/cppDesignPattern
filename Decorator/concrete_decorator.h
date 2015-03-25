#ifndef CONCRETE_DECORATOR_H
#define CONCRETE_DECORATOR_H
#include "decorator.h"
#include "component.h"

class concrete_decorator:public decorator
{
public:
    concrete_decorator();
    concrete_decorator(component*);
    virtual ~concrete_decorator();
    virtual int method();
    void set_member(int);
    int get_member();
protected:
    component* __warpped;
    int __member;
};

class concrete_decorator_a:public concrete_decorator
{
public:
    concrete_decorator_a();
    concrete_decorator_a(component*);
    virtual ~concrete_decorator_a();
    virtual int method();
    int member_a;
    
};

class concrete_decorator_b :public concrete_decorator
{
public:
    concrete_decorator_b();
    concrete_decorator_b(component*);
    virtual ~concrete_decorator_b();
    virtual int method();
    int member_b;
    
};

#endif

