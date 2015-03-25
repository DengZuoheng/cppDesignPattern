#include "concrete_decorator.h"
#include "decorator.h"
#include <iostream>

concrete_decorator::concrete_decorator() 
    :decorator(),__warpped(nullptr), __member(0)
{
    //pass
}

concrete_decorator::concrete_decorator(component* p)
    : decorator(), __warpped(p), __member(0)
{
    //pass
}

void concrete_decorator::set_member(int val)
{
    __member = val;
}

int concrete_decorator::get_member()
{
    return __member;
}

int concrete_decorator::method()
{
    if(__warpped)
    {
        return __member+__warpped->method();
    }
    else
    {
        return __member;
    }
}

concrete_decorator::~concrete_decorator()
{
    delete __warpped;//only here should be deleted
    std::cout<<"~concrete_decorator"<<std::endl;
}

concrete_decorator_a::concrete_decorator_a() 
    :concrete_decorator(), member_a(0)
{
    //pass
}

concrete_decorator_a::concrete_decorator_a(component* p) 
    :concrete_decorator(p), member_a(0)
{
    //pass
}

int concrete_decorator_a::method()
{
    if(__warpped)
    {
         return __member + member_a + __warpped->method();
    }
    else
    {
        return __member + member_a;
    }

}

concrete_decorator_a::~concrete_decorator_a()
{
   
    std::cout<<"~concrete_decorator_a"<<std::endl;
}

concrete_decorator_b::concrete_decorator_b() 
    :concrete_decorator(), member_b(0)
{
    //pass
}

concrete_decorator_b::concrete_decorator_b(component* p) 
    :concrete_decorator(p), member_b(0)
{
    //pass
}


int concrete_decorator_b::method()
{
    if(__warpped)
    {
         return __member + 2*member_b + __warpped->method();
    }
    else
    {
        return __member + 2*member_b;
    }
}

concrete_decorator_b::~concrete_decorator_b()
{
    
    std::cout<<"~concrete_decorator_b"<<std::endl;
}