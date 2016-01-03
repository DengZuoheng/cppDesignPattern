#include "concrete_colleague_b.h"
#include <iostream>

concrete_colleague_b::~concrete_colleague_b(){}

void concrete_colleague_b::recv_msg(const std::string& msg)
{
	std::cout << "concrete_colleague_b::recv_msg->" << msg << std::endl;
}

void concrete_colleague_b::send_msg(int to_id,const std::string& msg)
{
    if(_mdr){
        _mdr->operate(to_id,msg);
    }
}
