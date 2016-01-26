#include <iostream>
#include "concrete_flyweight.h"

concrete_flyweight::concrete_flyweight()
    :_other_state(0)
{
    //pass
}

concrete_flyweight::concrete_flyweight(int other_state)
    :_other_state(other_state)
{
    //pass
}

concrete_flyweight::concrete_flyweight(std::string str) : _other_state(0)
{

	for (int i = 0; i != str.size(); i++)
	{
		_other_state += str[i];
	}
}

void concrete_flyweight::operation()
{
    std::cout<<_other_state<<std::endl;
}