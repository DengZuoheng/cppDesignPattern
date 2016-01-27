#include "strategy.hpp"

int main()
{
    concrete_context cc;
    strategy_ptr p1=make_shared<concrete_strategy>();
    cc.set_strategy(p1);
    cc.algorithm();
    strategy_ptr p2=make_shared<null_strategy>();
    cc.set_strategy(p2);
    cc.algorithm();
    return 0;
}