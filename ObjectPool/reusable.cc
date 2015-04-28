#include <iostream>
#include "reusable.h"

reusable::reusable()
{
    std::cout<<"reusable::reusable()"<<std::endl;
}

reusable::~reusable()
{
    std::cout<<"reusable::~reusable()"<<std::endl;
}

void reusable::operation()
{
    std::cout<<"reusable::operation()"<<std::endl;
}