#ifndef _state_h_
#define _state_h_
#include <boost/smart_ptr.hpp>
using boost::shared_ptr;
using boost::make_shared;

class context;
class state{
public:
    typedef shared_ptr<state> state_ptr;
    virtual void handle(context*)=0;
    //其实这里应该有handle1,handle2...因为不同的输入应该有不同的状态转移,
    //通过调用不同的handle方法实现不同的转移
	virtual ~state(){};
};

#endif