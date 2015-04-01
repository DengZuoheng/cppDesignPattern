#include "adapter.h"
#include <iostream>

void adapter::_interface()
{
    adaptee::method();
    std::cout<<"adapter::interface"<<std::endl;
}