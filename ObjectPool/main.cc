#include "reusable.h"
#include "object_pool.hpp"

int main()
{
    auto it = object_pool<reusable>::get_instance();
    it->operation();
    object_pool<reusable>::release_instance(it);
    auto it2 = object_pool<reusable>::get_instance();
    it2->operation();
    return 0;
}