#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include <string>
#include <memory>

using std::shared_ptr;

class colleague
{
public:
    virtual void recv_msg(const std::string& msg)=0;
    virtual void send_msg(int to_id, const std::string& msg)=0;
    virtual ~colleague(){};
};

#endif