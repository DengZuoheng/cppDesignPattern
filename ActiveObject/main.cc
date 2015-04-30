#include <iostream>
#include <thread>
#include "active_object_engine.h"
#include "command.h"
#include "concrete_command.h"
void client1()
{
    while(true)
    {
        command* c = new concrete_command();
        active_object_engine::instance().add_command(c);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void client2()
{
    while(true)
    {
        command* c = new concrete_command();
        active_object_engine::instance().add_command(c);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main()
{
    std::thread t1(client1);
    std::thread t2(client2);
    t1.join();
    t2.join();
    return 0;
}