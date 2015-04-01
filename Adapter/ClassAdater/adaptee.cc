#include "adaptee.h"
#include <iostream>
void adaptee::method()
{
    std::cout<<"adaptee::method"<<std::endl;
}

adaptee::~adaptee()
{
    //pass
}