#include <iostream>
#include "concrete_strategy.h"

void concrete_strategy::algorithm()
{
    std::cout<<"concrete_strategy::algorithm"<<std::endl;
}

concrete_strategy::~concrete_strategy(){}

void null_strategy::algorithm()
{
    std::cout<<"null_strategy::algorithm"<<std::endl;
}

null_strategy::~null_strategy(){}