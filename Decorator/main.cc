#include <iostream>
#include <cassert>
#include "component.h"
#include "concrete_component.h"
#include "concrete_decorator.h"
#include "component.h"

int main()
{
    component* p = new concrete_component();
    p->set_member(8);
    p = new concrete_decorator(p);
    p->set_member(7);
    p = new concrete_decorator_a(p);
    p->set_member(6);
    dynamic_cast<concrete_decorator_a*>(p)->member_a = 1;
    p = new concrete_decorator_b(p);
    p->set_member(5);
    dynamic_cast<concrete_decorator_b*>(p)->member_b = 2;
    std::cout<<p->method()<<std::endl;
    assert(p->method() == 8 + 7 + 6 + 1 + 5 + 2 * 2);
    delete p;
    return 0;

}