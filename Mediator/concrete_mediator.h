#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H
#include <map>
#include <memory>
#include "mediator.h"
using std::shared_ptr;
using std::weak_ptr;
using std::enable_shared_from_this;

class concrete_mediator:
    public mediator,public enable_shared_from_this<concrete_mediator>
{
public:
    concrete_mediator();
    void operate(int id, const std::string& msg);
    bool registe(int id, shared_ptr<colleague> colg);
    ~concrete_mediator();
private:
    std::map<int,weak_ptr<colleague>> colg_map;
};

#endif