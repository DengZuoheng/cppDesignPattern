#ifndef CONCRETE_COLLEAGUE_B_H
#define CONCRETE_COLLEAGUE_B_H
#include "colleague_imp.h"

class concrete_colleague_b:public colleague_imp
{
public:
    void recv_msg(const std::string& msg);
    void send_msg(int to_id,const std::string& msg);
	~concrete_colleague_b();
};

#endif