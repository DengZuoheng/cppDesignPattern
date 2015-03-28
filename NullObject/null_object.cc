#include<iostream>
#include "null_object.h"

Base::Base()
{
    //do nothing
}

Base::Base(const std::string& str):__state(str)
{
    //do nothing
}

Derive::Derive()
{
    //do nothing
}

Derive::Derive(const std::string& str):Base(str)
{
    //do nothing
}

Null::Null()
{
    //do nothing
}

Null::Null(const std::string& str) :Base(str)
{
    //do nothing
}

void Derive::some_polymorphic_method()
{
    std::cout<<__state<<std::endl;
}

void Null::some_polymorphic_method()
{
    //do nothing
}