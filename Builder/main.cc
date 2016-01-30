#include <iostream>
#include <boost/smart_ptr.hpp>
#include "product.h"
#include "builder.h"
#include "director.h"
#include "concrete_builder.h"
using boost::make_shared;
int main()
{
    builder_ptr builder = make_shared<concrete_builder>();
    director_ptr dct = make_shared<director>();
    dct->set_builder(builder);
    product_ptr pdt = dct->construct();
	assert(2 == pdt->state());
    return 0;
}