#include "invoker.h"
#include "receiver.h"
#include "command.h"
#include <memory>

int main()
{

    receiver rec1("receiver1");

    concrete_invoker cinv;
    auto ptr_cmd1 = std::make_shared<concrete_command>(rec1);
    cinv.set_command(ptr_cmd1);
    cinv.on_event();
    auto ptr_cmd2 = std::make_shared<concrete_command>(receiver("receiver2"));
    cinv.set_command(ptr_cmd2);
    cinv.on_event();

    return 0;
}