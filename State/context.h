#ifndef _context_h_
#define _context_h_

#include "state.h"

class context{
public:
    virtual void change_state(state::state_ptr)=0;
    virtual void request()=0;
	virtual ~context(){};
};

#endif