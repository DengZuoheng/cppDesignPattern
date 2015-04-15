#include <memory>
#include "abstraction.h"
#include "implementor.h"
#include "refined_abstraction.h"
#include "concrete_implementor.h"

using std::shared_ptr;
using std::make_shared;

int main()
{
    refined_abstraction ref;
    shared_ptr<implementor> pia = make_shared<concrete_implementor_a>();
    shared_ptr<implementor> pib = make_shared<concrete_implementor_b>();
    ref.set_impl(pia);
    ref.operation();
    ref.set_impl(pib);
    ref.operation();
    return 0;
}