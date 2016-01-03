#include "concrete_colleague_a.h"
#include <iostream>

concrete_colleague_a::~concrete_colleague_a(){}

void concrete_colleague_a::recv_msg(const std::string& msg)
{
    std::cout<<"concrete_colleague_a::recv_msg->"<<msg<<std::endl;
}

void concrete_colleague_a::send_msg(int to_id,const std::string& msg)
{
    if(_mdr){
        _mdr->operate(to_id,msg);
    }
}