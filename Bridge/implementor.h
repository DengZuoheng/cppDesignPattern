#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

class implementor
{
public:
    implementor();
    virtual ~implementor();
    virtual void operation_impl()=0;

};

#endif