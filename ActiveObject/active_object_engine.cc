#include <thread>
#include <mutex>
#include <iostream>
#include <functional>
#include "command.h"
#include "active_object_engine.h"

active_object_engine::active_object_engine()
:__queue(), __con(), __mtx()
{
    static int i = 0;
    i++;
    __th = std::thread(std::mem_fun(&active_object_engine::run), this);
}

active_object_engine& active_object_engine::instance()
{
    static active_object_engine __instance;
    return __instance;
}

void active_object_engine::run()
{
    while(true)
    {
        while(!__queue.empty())
        {
            __mtx.lock();
            command* c = __queue.front();
            __queue.pop();
            __mtx.unlock();
            c->execute();
            delete c;
        }
        std::unique_lock<std::mutex> lock(__mtx);
        while(__queue.empty())
        {
            std::cout << "empty waiting..." << std::endl;
            __con.wait(lock);
        }
    }
   
}

void active_object_engine::add_command(command* c)
{
    __mtx.lock();
    __queue.push(c);
    __mtx.unlock();
    __con.notify_one();
}




