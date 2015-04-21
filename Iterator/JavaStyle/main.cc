#include <iostream>
#include "abstract_iterator.h"
#include "abstract_iterable.h"
#include "concrete_iterable.h"

using std::cout;
using std::endl;

int main()
{
    concrete_iterable c;
    std::shared_ptr<abstract_iterator> it = c.create_iterator();
    while(!it->is_done())
    {
        cout<<*(int*)(it->next())<<endl;
    }
    return 0;
}