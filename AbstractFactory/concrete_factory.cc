#include <memory>
#include <iostream>
#include "abstract_product.h"
#include "concrete_factory.h"
#include "concrete_product.h"

concrete_factory1::concrete_factory1()
{
    //pass
}

concrete_factory1::~concrete_factory1()
{
    //pass
}

std::shared_ptr<abstract_product1> concrete_factory1::create_product1()
{
    std::cout<<"concrete_factory1::create_product1"<<std::endl;
    return std::make_shared<concrete_product1_type1>();
}

std::shared_ptr<abstract_product2> concrete_factory1::create_product2()
{
    std::cout<<"concrete_factory1::create_product2"<<std::endl;
    return std::make_shared<concrete_product2_type1>();
}

concrete_factory2::concrete_factory2()
{
    //pass
}

concrete_factory2::~concrete_factory2()
{
    //pass
}

std::shared_ptr<abstract_product1> concrete_factory2::create_product1()
{
    std::cout<<"concrete_factory2::create_product1"<<std::endl;
    return std::make_shared<concrete_product1_type2>();
}

std::shared_ptr<abstract_product2> concrete_factory2::create_product2()
{
    std::cout<<"concrete_factory2::create_product2"<<std::endl;
    return std::make_shared<concrete_product2_type2>();
}