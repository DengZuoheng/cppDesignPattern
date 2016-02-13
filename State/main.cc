#include "concrete_context.h"
#include "concrete_state.h"

int main()
{
    concrete_context context;
    context.request();
    context.request();
	context.request();
	context.request();
    return 0;
}