#include "invoker.h"
#include "command.h"
#include <memory>

void invoker::set_command(std::shared_ptr<command> _ptr)
{
    __cmd=_ptr;
}

void concrete_invoker::on_event()
{
    __cmd->execute();
}