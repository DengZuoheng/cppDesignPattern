#include <iostream>
#include <memory>

#include "duck.h"
#include "flybehavior.h"
#include "quackbehavior.h"

int main()
{
    Duck duck;
    duck.set_fly_behavior(std::make_shared<FlyWithWings>());
    duck.set_quack_behavior(std::make_shared<Quack>());
    duck.perform_fly();
    duck.perform_quack();
    
    duck.set_fly_behavior(std::make_shared<FlyNoWay>());
    duck.set_quack_behavior(std::make_shared<Squeak>());
    duck.perform_fly();
    duck.perform_quack();
    return 0;
}
