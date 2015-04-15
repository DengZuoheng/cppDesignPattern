#include <memory>
#include "abstraction.h"

abstraction::abstraction()
{
    //pass
}

abstraction::~abstraction()
{
    //pass
}

void abstraction::operation()
{
    impl->operation_impl();
}

void abstraction::set_impl(std::shared_ptr<implementor> _impl)
{
    impl=_impl;
}