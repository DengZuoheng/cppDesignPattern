#include <iostream>
#include "concrete_state.h"
#include "context.h"

state::state_ptr concrete_state_a::_instance;
state::state_ptr concrete_state_b::_instance;

concrete_state_a::concrete_state_a(){
	std::cout << "concrete_state_a::concrete_state_a" << std::endl;
}

concrete_state_a::~concrete_state_a()
{
	std::cout << "concrete_state_a::~concrete_state_a" << std::endl;
}

void concrete_state_a::handle(context* c){
    std::cout<<"concrete_state_a::handle"<<std::endl;
    c->change_state(concrete_state_b::instance());
}

state::state_ptr concrete_state_a::instance(){
    if(!_instance){
        _instance = state::state_ptr(new concrete_state_a());
    }
    return _instance;
}

concrete_state_b::concrete_state_b(){
	std::cout << "concrete_state_b::concrete_state_b" << std::endl;
}

concrete_state_b::~concrete_state_b(){
	std::cout << "concrete_state_b::~concrete_state_b" << std::endl;
}

void concrete_state_b::handle(context* c)
{
    std::cout<<"concrete_state_b::handle"<<std::endl;
    c->change_state(concrete_state_a::instance());
}

state::state_ptr concrete_state_b::instance(){
    if(!_instance){
        _instance = state::state_ptr(new concrete_state_b());
    }
    return _instance;
}