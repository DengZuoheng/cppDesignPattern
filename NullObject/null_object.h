#ifndef NULL_OBJECT_H
#define NULL_OBJECT_H
#include <string>

class Base
{
public:
    Base();
    Base(const std::string&);
    virtual void some_polymorphic_method()=0;
protected:
    std::string __state;
};

class Derive:public Base
{
public:
    Derive();
    Derive(const std::string&);
    virtual void some_polymorphic_method();
};

class Null:public Base
{
public:
    Null();
    Null(const std::string&);
    virtual void some_polymorphic_method();
};

#endif