#include <memory>
#include "concrete_product.h"
#include "concrete_creator.h"

int main()
{
    concrete_creator creator;
    auto p1 = creator.factory_method();
    auto p2 = creator.factory_method();
    return 0;
}