#ifndef _concrete_context_h
#define _concrete_context_h
#include "context.h"
class concrete_context:public context{
public:
    concrete_context();
    ~concrete_context();
    void request();
    void change_state(state::state_ptr);
private:
    state::state_ptr _state;
};

#endif