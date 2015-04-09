#ifndef ABSTRACT_PRODUCT_H
#define ABSTRACT_PRODUCT_H

class abstract_product1
{
public:
    abstract_product1();
    virtual ~abstract_product1();
    virtual void product_operation1()=0;
};

class abstract_product2
{
public:
    abstract_product2();
    virtual ~abstract_product2();
    virtual void product_operation2()=0;
};

#endif