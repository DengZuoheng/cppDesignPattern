#include <iostream>
#include <boost/smart_ptr.hpp>
#include "flyweight.hpp"
using boost::shared_ptr;
int main()
{
	concrete_flyweight_factory fac;
    typedef shared_ptr<flyweight> ptr_type;
    ptr_type p1= fac.unshared_flyweight_from_key("a");
    ptr_type p2= fac.unshared_flyweight_from_key("a");
    ptr_type p3= fac.unshared_flyweight_from_key("b");
    assert(p1!=p2);
    assert(p2!=p3);
    assert(p3!=p1);
    p1->operation();
    p2->operation();
    p3->operation();
    return 0;

}