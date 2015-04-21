#ifndef ABSTRACT_ITERABLE_H
#define ABSTRACT_ITERABLE_H
#include <memory>
#include "abstract_iterator.h"

class abstract_iterable
{ 
public:
    virtual std::shared_ptr<abstract_iterator> create_iterator()=0;
    virtual ~abstract_iterable();
};

#endif