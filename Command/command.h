#ifndef COMMAND_H
#define COMMAND_H
#include <memory>
#include "receiver.h"
class command
{
public:
    virtual void execute()=0;
    virtual void undo()=0;
    ~command(){};
};

class concrete_command:public command
{
public:
    concrete_command();
    concrete_command(const receiver&);
    virtual void execute();
    virtual void undo();
private:
    receiver __rec;
};

#endif