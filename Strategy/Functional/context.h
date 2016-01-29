#ifndef CONTEXT_H
#define CONTEXT_H
#include <boost/function.hpp>
using boost::function;
class context
{
public:
   typedef function<void(context&)> algo_func_type;
   friend algo_func_type;
   algo_func_type algorithm;
                    
};

#endif