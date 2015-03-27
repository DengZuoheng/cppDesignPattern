#include "monostate.h"
#include <iostream>

int monostate_base::__state_base = 0;
int monostate_inheritor_a::__state_new_a = 0;
int monostate_inheritor_b::__state_new_b = 0;

void monostate_base::set_state_base(int value)
{
    __state_base = value;
}

int monostate_base::get_state_base()
{
    return __state_base;
}

int monostate_base::some_polymorphic_method()
{
    std::cout<<"monostate_base::some_polymorphic_method"<<std::endl;
    return __state_base;
}

int monostate_base::static_base_method()
{
    std::cout<<"monostate_base::static_base_method"<<std::endl;
    return __state_base;
}

void monostate_inheritor_a::set_state_new_a(int value)
{
    __state_new_a = value;
}

int monostate_inheritor_a::get_state_new_a()
{
    return __state_new_a;
}

int monostate_inheritor_a::some_polymorphic_method()
{
    std::cout<<"monostate_inheritor_a::some_polymorphic_method"<<std::endl;
    return monostate_base::__state_base + __state_new_a;
}

int monostate_inheritor_a::static_new_method_a()
{
    std::cout<<"monostate_inheritor_a::static_new_method_a"<<std::endl;
    return __state_new_a;
}

void monostate_inheritor_b::set_state_new_b(int value)
{
    __state_new_b = value;
}

int monostate_inheritor_b::get_state_new_b()
{
    return __state_new_b;
}

int monostate_inheritor_b::some_polymorphic_method()
{
    std::cout<<"monostate_inheritor_b::some_polymorphic_method"<<std::endl;
    return monostate_base::__state_base + __state_new_b;
}

int monostate_inheritor_b::static_new_method_b()
{
    std::cout<<"monostate_inheritor_b::static_new_method_b"<<std::endl;
    return __state_new_b;
}