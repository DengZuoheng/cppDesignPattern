#include "concrete_context.h"

concrete_context::concrete_context(){}

void concrete_context::algorithm()
{
    if(_strategy) _strategy->algorithm();
}

void concrete_context::set_strategy(strategy_ptr st)
{
    _strategy=st;
}

concrete_context::~concrete_context(){}