#ifndef MONOSTATE_H
#define MONOSTATE_H

class monostate_base
{
public:
    void set_state_base(int);
    int get_state_base();
    virtual int some_polymorphic_method();
    static int static_base_method();
protected:
    static int __state_base;
};

class monostate_inheritor_a:public monostate_base
{
public:
    void set_state_new_a(int);
    int get_state_new_a();
    virtual int some_polymorphic_method();
    static int static_new_method_a();
private:
    static int __state_new_a;
};

class monostate_inheritor_b:public monostate_base
{
public:
    void set_state_new_b(int);
    int get_state_new_b();
    virtual int some_polymorphic_method();
    static int static_new_method_b();
private:
    static int __state_new_b;
};

#endif