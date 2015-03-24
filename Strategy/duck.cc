#include "duck.h"

Duck::Duck():fly_behavior(nullptr), quack_behavior(nullptr)
{
    //pass
}

Duck::Duck(std::shared_ptr<FlyBehavior> init_fly_behavior,
        std::shared_ptr<QuackBehavior> init_quack_behavior)
        :fly_behavior(init_fly_behavior), quack_behavior(init_quack_behavior)
{
    //pass
}

void Duck::set_fly_behavior(std::shared_ptr<FlyBehavior> new_fly_behavior)
{
    fly_behavior = new_fly_behavior;
}

void Duck::set_quack_behavior(std::shared_ptr<QuackBehavior> new_quack_behavior)
{
    quack_behavior = new_quack_behavior;
}

void Duck::perform_fly()
{
    if (fly_behavior)
    {
        fly_behavior->fly();
    }
    
}

void Duck::perform_quack()
{
    if (quack_behavior)
    {
        quack_behavior->quack();
    }      
}