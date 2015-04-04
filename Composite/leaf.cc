#include <iostream>
#include "leaf.h"
#include "component.h"

leaf::leaf():component()
{
    //pass
}

leaf::~leaf()
{
    //pass
}

void leaf::operation()
{
    std::cout<<"leaf::operation"<<std::endl;
}