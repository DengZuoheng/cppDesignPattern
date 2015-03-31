#ifndef INVOKER_H
#define INVOKER_H
#include <memory>
#include "command.h"

class invoker
{
public:
    virtual void set_command(std::shared_ptr<command>);
    ~invoker(){};
protected:
    std::shared_ptr<command> __cmd;
};

class concrete_invoker :public invoker
{
public:
    void on_event();
};
#endif