#include "command.h"

concrete_command::concrete_command()
{
    //pass
}

concrete_command::concrete_command(const receiver& rec):__rec(rec)
{
    //pass
}

void concrete_command::execute()
{
    __rec.action();
}

void concrete_command::undo()
{
    //pass
}