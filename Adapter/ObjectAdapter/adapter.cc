#include "adapter.h"
#include <iostream>

void adapter::_interface()
{
    __adaptee.method();
    std::cout<<"adapter::interface"<<std::endl;
}