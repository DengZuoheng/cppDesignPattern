#include <memory>
#include "abstract_class.h"
#include "concrete_class.h"

using std::shared_ptr;
using std::make_shared;

int main()
{
    concrete_class obj;
    obj.template_method();
    shared_ptr<abstract_class> ptr = make_shared<concrete_class>();
    ptr->template_method();
    return 0;
}