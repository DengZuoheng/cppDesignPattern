#ifndef PRODUCT_H
#define PRODUCT_H

class product
{
public:
    product();
    product(const product&);
    product& operator=(const product&);
    virtual ~product();
};

#endif