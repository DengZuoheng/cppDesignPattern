#ifndef ABSTRACT_CLASS
#define ABSTRACT_CLASS

class abstract_class
{
public:
    abstract_class();
    virtual ~abstract_class();
    void template_method();

protected:
    virtual void primitive_operation1()=0;
    virtual void primitive_operation2()=0;
    virtual void primitive_operation3()=0;
    virtual void primitive_operation4()=0;

};

#endif