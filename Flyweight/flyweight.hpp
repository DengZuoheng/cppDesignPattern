#ifndef FLYWEIGHT_HPP
#define FLYWEIGHT_HPP

#include "flyweight.h"
#include "concrete_flyweight.h"
#include "unshared_concrete_flyweight.h"
#include "flyweight_factory.hpp"

typedef std::string key_type;
typedef int state_type;
typedef flyweight_factory<key_type> concrete_flyweight_factory;


#endif