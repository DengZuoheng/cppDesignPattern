#include <set>
#include <memory>
#include <iostream>
#include "component.h"
#include "composite.h"

composite::composite():component()
{
    //pass
}

composite::~composite()
{
    //pass
}

void composite::operation()
{
    std::cout<<"composite::operation"<<std::endl;
    for(auto it=__set.begin();it!=__set.end();++it)
    {
        it->operator->()->operation();
    }
}

void composite::add(const std::shared_ptr<component>& component_ptr)
{
    if (component_ptr.get() != this)
    {
        __set.insert(component_ptr);
    }
   
}

void composite::remove(const std::shared_ptr<component>& component_ptr)
{
    __set.erase(component_ptr);
}