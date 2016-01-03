#include "colleague_imp.h"

void colleague_imp::set_mediator(shared_ptr<mediator> mdr)
{
    if (mdr){
        _mdr = mdr;
    }
}
colleague_imp::~colleague_imp()
{
    
}   