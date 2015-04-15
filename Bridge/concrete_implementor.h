#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H
#include "implementor.h"

class concrete_implementor_a:public implementor
{
public:
    concrete_implementor_a();
    ~concrete_implementor_a();
    void operation_impl();

};

class concrete_implementor_b:public implementor
{
public:
    concrete_implementor_b();
    ~concrete_implementor_b();
    void operation_impl();

};


#endif