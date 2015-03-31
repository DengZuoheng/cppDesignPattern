#include <string>
#include <iostream>
#include "receiver.h"

receiver::receiver()
{
    //do nothing
}

receiver::receiver(const std::string& _str):__str(_str)
{
    //do nothing
}

void receiver::action()
{
    std::cout<<__str<<std::endl;
}