#ifndef adapter_h
#define adapter_h

#include "target.h"
#include "adaptee.h"

class adapter:public target,private adaptee
{
public:
    void _interface();
};

#endif