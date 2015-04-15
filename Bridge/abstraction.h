#ifndef ABSTRACTION_H
#define ABSTRACTION_H
#include <memory>
#include "implementor.h"

class abstraction
{
public:
    abstraction();
    virtual ~abstraction();
    void operation();
    void set_impl(std::shared_ptr<implementor>);

protected:
    std::shared_ptr<implementor> impl;
};

#endif