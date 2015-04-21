#ifndef CONCRETE_ITERABLE_H
#define CONCRETE_ITERABLE_H
#include <memory>
#include "abstract_iterator.h"
#include "abstract_iterable.h"

class concrete_iterable:public abstract_iterable
{
public:
    class concrete_iterable_iter :public abstract_iterator
    {
    public:
        concrete_iterable_iter();
        concrete_iterable_iter(concrete_iterable*);
        void* first();
        void* next();
        bool is_done();
        void* current_item();
        ~concrete_iterable_iter();
    protected:
        int __cur;
        concrete_iterable* __iterable_obj;
        void* __return_index(int);
    };
public:
    virtual std::shared_ptr<abstract_iterator> create_iterator();

public:
    concrete_iterable();
    ~concrete_iterable();

protected:
    int d1;
    int d2;
    int d3;
    int d4;
    int d5;
    int d6;

};

#endif