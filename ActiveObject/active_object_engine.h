#ifndef active_object_engine_h
#define active_object_engine_h
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "command.h"
class active_object_engine
{
private:
    active_object_engine();
public:
    static active_object_engine& instance();
    void add_command(command*);
    void run();
private:
    std::queue<command*> __queue;
    std::mutex __mtx;
    std::thread __th;
    std::condition_variable __con;
};

#endif