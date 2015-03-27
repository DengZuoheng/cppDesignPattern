#include<cassert>
#include "monostate.h"

using namespace std;

int main()
{
    monostate_base* p1=new monostate_base();
    monostate_base* p2=new monostate_inheritor_a();
    monostate_base* p3=new monostate_inheritor_b();
    p1->set_state_base(3);
    p2->set_state_base(4);
    p3->set_state_base(5);
    assert(p1->some_polymorphic_method()==5);
    dynamic_cast<monostate_inheritor_a*>(p2)->set_state_new_a(6);
    dynamic_cast<monostate_inheritor_b*>(p3)->set_state_new_b(7);
    assert(p2->some_polymorphic_method()==5+6);
    assert(p3->some_polymorphic_method()==5+7);
    assert(dynamic_cast<monostate_inheritor_a*>(p2)->static_new_method_a() == 6);
    assert(dynamic_cast<monostate_inheritor_b*>(p3)->static_new_method_b() == 7);
    monostate_base* p4=new monostate_inheritor_a();
    monostate_base* p5=new monostate_inheritor_b();
    assert(dynamic_cast<monostate_inheritor_a*>(p4)->get_state_new_a() == 6);
    assert(dynamic_cast<monostate_inheritor_b*>(p5)->get_state_new_b() == 7);
    assert(p4-> get_state_base() == 5);
    assert(p5->get_state_base() == 5);
    return 0;

}