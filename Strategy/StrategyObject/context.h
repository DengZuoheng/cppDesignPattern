#ifndef CONTEXT_H
#define CONTEXT_H
#include "strategy.h"
class context
{
public:
    virtual void algorithm()=0;
    virtual void set_strategy(strategy_ptr st)=0;
    virtual ~context(){};
};

#endif