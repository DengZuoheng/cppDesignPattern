#include "singleton.h"

int main()
{
    volatile singleton* p = singleton::instance();
    return 0;
}