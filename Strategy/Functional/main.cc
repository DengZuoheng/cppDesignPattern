#include <iostream>
#include "context.h"

int main()
{
    context ct;
    ct.algorithm = [](context&){std::cout<<"lambda strategy"<<std::endl;};
    ct.algorithm(ct);
    return 0;
}