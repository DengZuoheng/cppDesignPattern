#include "director.h"

void director::set_builder(builder_ptr builder)
{
    _builder=builder;
}

product_ptr director::construct()
{
	if (_builder){
		_builder->build_part_a();
		_builder->build_part_b();
		_builder->build_part_c();
		return _builder->get_result();
	}
    return product_ptr();
}

director::~director(){}