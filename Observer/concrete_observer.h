#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H
#include "observer.h"
#include "subject.h"

class concrete_observer:public observer
{
public:
    virtual void update(int);
};

#endif