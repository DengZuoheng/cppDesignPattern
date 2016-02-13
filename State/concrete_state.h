#ifndef _concrete_state_h_
#define _concrete_state_h_
#include "state.h"

class concrete_state_a: public state{
public: 
    ~concrete_state_a();
    void handle(context*);
public:
    static state::state_ptr instance();
private:
    concrete_state_a();
    static state::state_ptr _instance;
};

class concrete_state_b: public state{
public: 
    ~concrete_state_b();
    void handle(context*);
public:
    static state::state_ptr instance();
private:
    concrete_state_b();
    static state::state_ptr _instance;
};

#endif