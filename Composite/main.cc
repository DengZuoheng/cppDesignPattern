#include <memory>
#include "component.h"
#include "leaf.h"
#include "composite.h"

using std::shared_ptr;
using std::make_shared;

int main()
{
    shared_ptr<leaf> p1=make_shared<leaf>();
    shared_ptr<leaf> p2=make_shared<leaf>();
    shared_ptr<composite> p3 = make_shared<composite>();
    p3->remove(p1);
    p3->add(p1);
    p3->add(p2);
    p1->operation();
    p2->operation();
    p3->operation();
    p3->add(p3);
    p3->remove(p2);
    p3->operation();
    return 0;
}