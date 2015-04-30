#ifndef concrete_command_h
#define concrete_command_h
#include "command.h"

class concrete_command:public command
{
public:
    concrete_command();
    void execute();
    ~concrete_command();
    
};

#endif