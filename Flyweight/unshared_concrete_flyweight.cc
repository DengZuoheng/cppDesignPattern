#include <iostream>
#include "unshared_concrete_flyweight.h"

 unshared_concrete_flyweight::unshared_concrete_flyweight()
    :_other_state(0),_intrinsic_state()
{
    //pass
}

 unshared_concrete_flyweight::unshared_concrete_flyweight(
	 weak_ptr<concrete_flyweight> intri_state,
        int other_state)
    :_other_state(other_state),_intrinsic_state(intri_state)
{
    //pass
}

void  unshared_concrete_flyweight::operation()
{
	shared_ptr<intrinsic_state> ptr=_intrinsic_state.lock();
	if (ptr) ptr->operation();
    std::cout<<_other_state<<std::endl;
}