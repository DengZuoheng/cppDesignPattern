#include "concrete_subject.h"
#include "observer.h"

bool concrete_subject::register_observer(
    std::shared_ptr<observer> new_observer_ptr)
{
    try{
        __observers.insert(new_observer_ptr);
        return true;
    }catch(...){
        return false;
    }
}

bool concrete_subject::remove_observer(
    std::shared_ptr<observer> removed_observer_ptr)
{
    try{   
        __observers.erase(removed_observer_ptr);
        return true;
    }catch(...){
        auto it = __observers.find(removed_observer_ptr);
        if(it==__observers.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void concrete_subject::notify_observer()
{
    for(auto it=__observers.begin();it!=__observers.end();)
    {
        if(!it->unique())
        {
            try{
                (*it)->update(__state);
            }catch(...){
                //pass
            }
            ++it;
        }
        else
        {
            it =  __observers.erase(it);
        }
    }
}

void concrete_subject::set_state(int new_state)
{
    __state = new_state;
    notify_observer();
}

int concrete_subject::get_state() const
{
    return __state;
}