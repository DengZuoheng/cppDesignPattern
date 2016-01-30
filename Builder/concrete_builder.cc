#include "concrete_builder.h"

using boost::make_shared;

concrete_builder::concrete_builder():count(0){}

product_ptr concrete_builder::get_result()
{
    if(count==3&&tmp_pd){
        count=0;
        concrete_product_ptr ret = tmp_pd;
		tmp_pd = concrete_product_ptr();
        return ret;
    }else{
        count=0;
        return concrete_product_ptr();
    }
}

void concrete_builder::build_part_a()
{
    tmp_pd = make_shared<concrete_product>();
    if(tmp_pd) count++;
}

void concrete_builder::build_part_b()
{
    if(tmp_pd){
        tmp_pd->_state++;
        count++;
    }
}

void concrete_builder::build_part_c()
{
    build_part_b();
}

concrete_builder::~concrete_builder(){}