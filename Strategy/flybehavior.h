#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class FlyWithWings:public FlyBehavior
{
public:
    virtual void fly();
};

class FlyNoWay :public FlyBehavior
{
public:
    virtual void fly();
};

#endif