#ifndef STRATEGY_H
#define STRATEGY_H
#include <boost/smart_ptr.hpp>
using boost::shared_ptr;

class strategy
{
public:
    virtual void algorithm()=0;
    virtual ~strategy(){}    
};

typedef shared_ptr<strategy> strategy_ptr;

#endif