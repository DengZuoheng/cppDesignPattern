#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>
#include <memory>
#include "colleague.h"
using std::shared_ptr;
class mediator
{
public:
    virtual void operate(int id, const std::string& msg)=0;
    virtual bool registe(int id, shared_ptr<colleague> colg)=0;
    virtual ~mediator(){}
};


#endif