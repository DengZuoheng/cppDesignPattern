#include "concrete_observer.h"
#include "concrete_subject.h"
#include "subject.h"
#include <iostream>

void concrete_observer::update(int value)
{
    std::cout << value << std::endl;  
}