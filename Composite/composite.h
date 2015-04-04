#include <set>
#include <memory>
#include "component.h"

class composite:public component
{
public:
    composite();
    virtual ~composite();
    virtual void operation();
    void add(const std::shared_ptr<component>&);
    void remove(const std::shared_ptr<component>&);

protected:
    std::set<std::shared_ptr<component>> __set;

};