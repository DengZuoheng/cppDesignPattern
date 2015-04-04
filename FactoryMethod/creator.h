#ifndef CREATOR_H
#define CREATOR_H
#include <memory>
#include "product.h"
class creator
{
public:
    creator();
    virtual ~creator();
    virtual std::shared_ptr<product> factory_method()=0;
};

#endif