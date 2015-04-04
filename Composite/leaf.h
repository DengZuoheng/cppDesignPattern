#include "component.h"

class leaf:public component
{
public:
    leaf();
    virtual ~leaf();
    virtual void operation();
};