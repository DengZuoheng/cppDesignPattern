#include <memory>
#include "abstract_factory.h"
#include "abstract_product.h"
#include "concrete_factory.h"
#include "concrete_product.h"

using std::shared_ptr;
using std::make_shared;

shared_ptr<abstract_factory> factory_method(int type)
{
    switch(type)
    {
        case 1:
            return make_shared<concrete_factory1>();
        case 2:
            return make_shared<concrete_factory2>();
    }
}

int main()
{
    auto ptr = factory_method(2);
    auto product1 = ptr->create_product1();
    auto product2 = ptr->create_product2();
    product1->product_operation1();
    product2->product_operation2();
    return 0;
}