#ifndef unshared_concrete_flyweight_h
#define unshared_concrete_flyweight_h
#include <boost/smart_ptr.hpp>
#include "flyweight.h"
#include "concrete_flyweight.h"
using boost::weak_ptr;
using boost::shared_ptr;

class unshared_concrete_flyweight:public flyweight
{
protected:
    typedef concrete_flyweight intrinsic_state;
    weak_ptr<intrinsic_state> _intrinsic_state;
public:
    unshared_concrete_flyweight();
	unshared_concrete_flyweight(weak_ptr<concrete_flyweight> intri_state, int other_state);
    int _other_state;
    void operation();
	~unshared_concrete_flyweight(){};

};
#endif