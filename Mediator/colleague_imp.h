#ifndef COLLEAGUE_IMP_H
#define COLLEAGUE_IMP_H
#include <memory>
#include <string>
#include "colleague.h"
#include "mediator.h"

class colleague_imp:public colleague
{
public:
    virtual void recv_msg(const std::string& msg)=0;
    virtual void send_msg(int to_id, const std::string& msg)=0;
	void set_mediator(shared_ptr<mediator> mdr);
    ~colleague_imp();   
protected:
    shared_ptr<mediator> _mdr;
};

#endif