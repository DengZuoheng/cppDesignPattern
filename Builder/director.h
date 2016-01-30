#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <boost/smart_ptr.hpp>
#include "builder.h"
#include "product.h"
class director
{
public:
    void set_builder(builder_ptr builder);
    product_ptr construct();
    virtual ~director();
protected:
    builder_ptr _builder;

};
typedef shared_ptr<director> director_ptr;
#endif