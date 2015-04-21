#include <memory>
#include "abstract_iterator.h"
#include "abstract_iterable.h"
#include "concrete_iterable.h"

concrete_iterable::concrete_iterable():
    d1(1),d2(2),d3(3),d4(4),d5(5),d6(6)
{
    //pass
}

concrete_iterable::~concrete_iterable()
{
    //pass
}

std::shared_ptr<abstract_iterator> concrete_iterable::create_iterator()
{
    return std::make_shared<concrete_iterable::concrete_iterable_iter>(this);
}

concrete_iterable::concrete_iterable_iter::concrete_iterable_iter()
{
    __cur=0;
}

concrete_iterable::concrete_iterable_iter::concrete_iterable_iter(
    concrete_iterable* _ptr)
{
    __iterable_obj = _ptr;
    __cur=0;
}

void* concrete_iterable::concrete_iterable_iter::first()
{
    return &__iterable_obj->d1;
}

void* concrete_iterable::concrete_iterable_iter::next()
{
    __cur++;
    return  __return_index(__cur-1);
}

bool concrete_iterable::concrete_iterable_iter::is_done()
{
    return __cur == 6;
}

void* concrete_iterable::concrete_iterable_iter::current_item()
{
    return __return_index(__cur);
}

void* concrete_iterable::concrete_iterable_iter::__return_index(int i)
{
    switch(i)
    {
        case 0:
            return &__iterable_obj->d1;
            break;
        case 1:
            return &__iterable_obj->d2;
            break;
        case 2:
            return &__iterable_obj->d3;
            break;
        case 3:
            return &__iterable_obj->d4;
            break;
        case 4:
            return &__iterable_obj->d5;
            break;
        case 5:
            return &__iterable_obj->d6;
            break;

    }
    return NULL;
}

concrete_iterable::concrete_iterable_iter::~concrete_iterable_iter()
{
    //pass
}

