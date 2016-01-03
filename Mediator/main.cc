#include <iostream>
#include <memory>
#include "concrete_mediator.h"
#include "concrete_colleague_a.h"
#include "concrete_colleague_b.h"

using namespace std;

int main()
{
    shared_ptr<colleague_imp> pa=make_shared<concrete_colleague_a>();
    shared_ptr<colleague_imp> pb=make_shared<concrete_colleague_b>();
    shared_ptr<mediator> pm=make_shared<concrete_mediator>();
    pm->registe(1,pa);
    pm->registe(2,pb);
	pa->set_mediator(pm);
	pb->set_mediator(pm);
	pa->send_msg(2,"hello, world");
    pb->send_msg(1,"42 is the answer");
    return 0;
}