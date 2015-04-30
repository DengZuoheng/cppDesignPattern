#include <iostream>
#include "concrete_command.h"

concrete_command::concrete_command()
{
    //pass
}

void concrete_command::execute()
{
    std::cout<<"concrete_command::execute()"<<std::endl;
}

concrete_command::~concrete_command()
{
    //pass
}