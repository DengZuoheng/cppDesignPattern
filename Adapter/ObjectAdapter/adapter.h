#ifndef adapter_h
#define adapter_h

#include "target.h"
#include "adaptee.h"

class adapter:public target
{
public:
    void _interface();
private: 
    adaptee __adaptee;
};

#endif