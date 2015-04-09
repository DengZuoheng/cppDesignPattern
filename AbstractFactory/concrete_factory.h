#ifndef concrete_factory_h
#define concrete_factory_H
#include <memory>
#include "abstract_factory.h"
#include "abstract_product.h"

class concrete_factory1:public abstract_factory
{
public:
    concrete_factory1();
    ~concrete_factory1();
    std::shared_ptr<abstract_product1> create_product1();
    std::shared_ptr<abstract_product2> create_product2();

};

class concrete_factory2:public abstract_factory
{
public:
    concrete_factory2();
    ~concrete_factory2();
    std::shared_ptr<abstract_product1> create_product1();
    std::shared_ptr<abstract_product2> create_product2();

};

#endif