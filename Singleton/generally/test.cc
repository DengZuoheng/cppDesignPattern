#include <iostream>
#include "singleton.h"

int main()
{
    Singleton::instance()->foo=10;
    std::cout<<Singleton::instance()->bar()<<std::endl;
    return 0;
}