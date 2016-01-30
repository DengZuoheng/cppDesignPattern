#ifndef BUILDER_H
#define BUILDER_H
#include <boost/smart_ptr.hpp>
#include "product.h"
using boost::shared_ptr;
class builder
{
public:
    virtual product_ptr get_result()=0;
    virtual void build_part_a()=0;
    virtual void build_part_b()=0;
    virtual void build_part_c()=0;
	virtual ~builder(){};
};

typedef shared_ptr<builder> builder_ptr;

#endif