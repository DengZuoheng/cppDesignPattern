#include <memory>
#include "product.h"
#include "creator.h"
#include "concrete_creator.h"
#include "concrete_product.h"

concrete_creator::concrete_creator()
{
    //pass
}

concrete_creator::~concrete_creator()
{
    //pass
}

std::shared_ptr<product> concrete_creator::factory_method()
{
    return std::make_shared<concrete_product>();
}