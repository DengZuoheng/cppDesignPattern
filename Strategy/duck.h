#ifndef DUCK_H
#define DUCK_H
#include <memory>
class Duck
{
private:
    std::shared_ptr<FlyBehavior> fly_behavior;
    std::shared_ptr<QuackBehavior> quack_behavior;
public:
    Duck();
    Duck(std::shared_ptr<FlyBehavior>,
        std::shared_ptr<QuackBehavior>);

    void set_fly_behavior(std::shared_ptr<FlyBehavior> );
   
    void set_quack_behavior(std::shared_ptr<QuackBehavior>);
    
    void perform_fly();
    void perform_quack();

};

#endif