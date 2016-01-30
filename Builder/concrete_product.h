#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H
#include "product.h"
class concrete_product:public product
{
public:  
    int state();
    int _state;
    ~concrete_product();
};

typedef shared_ptr<concrete_product> concrete_product_ptr;

#endif