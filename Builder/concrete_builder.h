#ifndef CONCRETE_BUILDER_H
#define CONCRETE_BUILDER_H
#include "builder.h"
#include "concrete_product.h"

class concrete_builder:public builder
{
public:
    concrete_builder();
    product_ptr get_result();
    void build_part_a();
    void build_part_b();
    void build_part_c();
    ~concrete_builder();
private:
    int count;
    concrete_product_ptr tmp_pd;
};


#endif