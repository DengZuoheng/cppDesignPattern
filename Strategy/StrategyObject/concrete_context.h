#ifndef CONCRETE_CONTEXT_H
#define CONCRETE_CONTEXT_H
#include <boost/smart_ptr.hpp>
#include "context.h"
class concrete_context:public context
{
public:
    concrete_context();
    void algorithm();
    void set_strategy(shared_ptr<strategy> st);
    ~concrete_context();
private:
    strategy_ptr _strategy;    
};

#endif