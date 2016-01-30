#ifndef PRODUCT_H
#define PRODUCT_H
#include <boost/smart_ptr.hpp>
using boost::shared_ptr;
class product
{
public:
	virtual int state() = 0;
	virtual ~product(){};
};

typedef shared_ptr<product> product_ptr;

#endif