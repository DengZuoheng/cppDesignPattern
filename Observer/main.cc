#include <memory>
#include "concrete_subject.h"
#include "concrete_observer.h"

int main()
{
    concrete_subject s;
    auto ptr=std::make_shared<concrete_observer>();
    s.register_observer(ptr);
    s.set_state(7);
    s.remove_observer(ptr);
    s.set_state(8);
    return 0;
}