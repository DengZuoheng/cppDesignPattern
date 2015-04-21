#ifndef ABSTRACT_ITERATOR_HPP
#define ABSTRACT_ITERATOR_HPP

class abstract_iterator
{
public:
    virtual void* first()=0;
    virtual void* next() = 0;
    virtual bool is_done()=0;
    virtual void* current_item() = 0;
    virtual ~abstract_iterator();
};

#endif