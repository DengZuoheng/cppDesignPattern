#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY
#include <memory>
#include "abstract_product.h"

class abstract_factory
{
public:
    abstract_factory();
    virtual ~abstract_factory();
    virtual std::shared_ptr<abstract_product1> create_product1()=0;
    virtual std::shared_ptr<abstract_product2> create_product2() = 0;
};

#endif