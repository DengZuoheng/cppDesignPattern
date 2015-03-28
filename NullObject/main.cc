#include "null_object.h"
#include <string>

Base* factory(const std::string& str)
{
    if(str=="null")
    {
        return new Null();
    }
    else
    {
        return new Derive(str);
    }
}

int main()
{
    Base* p1=factory("hello");
    Base* p2=factory("null");
    p1->some_polymorphic_method();
    p2->some_polymorphic_method();
    return 0;
}