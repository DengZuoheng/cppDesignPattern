#include <iostream>
#include "concrete_context.h"
#include "concrete_state.h"

concrete_context::concrete_context(){
	std::cout << "concrete_context::concrete_context" << std::endl;
    this->_state = concrete_state_a::instance();
    //初始状态应该由类本身决定
}

concrete_context::~concrete_context(){
	std::cout << "concrete_context::~concrete_context" << std::endl;
}

void concrete_context::request(){
    std::cout<<"concrete_context::request"<<std::endl;
    this->_state->handle(this);
}

void concrete_context::change_state(state::state_ptr new_state){
    std::cout<<"concrete_context::change_state"<<std::endl;
    this->_state = new_state;
}
