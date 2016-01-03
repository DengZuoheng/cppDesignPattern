#ifndef CONCRETE_COLLEAGUE_A_H
#define CONCRETE_COLLEAGUE_A_H
#include "colleague_imp.h"

class concrete_colleague_a:public colleague_imp
{
public:
    void recv_msg(const std::string& msg);
    void send_msg(int to_id,const std::string& msg);
    ~concrete_colleague_a();

};

#endif