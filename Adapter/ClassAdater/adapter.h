#ifndef adapter_h
#define adapter_h

#include "target.h"
#include "adaptee.h"

class adapter:public target,public adaptee
{
public:
    void _interface();
};

#endif