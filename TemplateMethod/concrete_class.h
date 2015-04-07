#ifndef CONCRETE_CLASS_H
#define CONCRETE_CLASS_H
#include "abstract_class.h"

class concrete_class:public abstract_class
{
public:
    concrete_class();
    virtual ~concrete_class();
protected:
    virtual void primitive_operation1();
    virtual void primitive_operation2();
    virtual void primitive_operation3();
    virtual void primitive_operation4();

};

#endif