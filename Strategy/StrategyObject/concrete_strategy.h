#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRATEGY_H
#include "strategy.h"
class concrete_strategy:public strategy
{
public:
    void algorithm();
    ~concrete_strategy();
};

class null_strategy:public strategy
{
public:
    void algorithm();
    ~null_strategy();
};

#endif