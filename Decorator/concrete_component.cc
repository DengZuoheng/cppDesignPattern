#include "concrete_component.h"
#include "component.h"
#include <iostream>

concrete_component::concrete_component()
    :component(), __member(0)
{
    //pass
}

int concrete_component::method()
{
    return __member;
}

void concrete_component::set_member(int val)
{
    __member = val;
}

concrete_component::~concrete_component()
{
    std::cout<<"~concrete_component"<<std::endl;
}