#ifndef CONCRETE_CREATOR_H
#define CONCRETE_CREATOR_H
#include <memory>
#include "creator.h"
#include "product.h"
class concrete_creator:public creator
{
public:
    concrete_creator();
    ~concrete_creator();
    std::shared_ptr<product> factory_method();
};
#endif