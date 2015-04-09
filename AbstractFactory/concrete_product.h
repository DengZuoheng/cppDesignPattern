#ifndef concrete_product_h
#define concrete_product_h
#include "abstract_product.h"

class concrete_product1_type1:public abstract_product1
{
public:
    void product_operation1();
};

class concrete_product1_type2:public abstract_product1
{
public:
    void product_operation1();
};


class concrete_product2_type1:public abstract_product2
{
public:
    void product_operation2();
};

class concrete_product2_type2:public abstract_product2
{
public:
    void product_operation2();
};



#endif