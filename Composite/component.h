#ifndef component_h
#define component_h

class component
{
public:
    component();
    virtual void operation()=0;
    virtual ~component();
};

#endif