#include <iostream>
#include "concrete_implementor.h"

concrete_implementor_a::concrete_implementor_a()
{
    //pass
}

concrete_implementor_a::~concrete_implementor_a()
{
    //pass
}

void concrete_implementor_a::operation_impl()
{
    std::cout<<"concrete_implementor_a::operation_impl"<<std::endl;
}

concrete_implementor_b::concrete_implementor_b()
{
    //pass
}

concrete_implementor_b::~concrete_implementor_b()
{
    //pass
}

void concrete_implementor_b::operation_impl()
{
    std::cout<<"concrete_implementor_b::operation_impl"<<std::endl;
}