#ifndef SUBJECT_H
#define SUBJECT_H
#include <memory>
#include "observer.h"
class subject
{
public:
    virtual bool register_observer(std::shared_ptr<observer>) = 0;
    virtual bool remove_observer(std::shared_ptr<observer>) = 0;
    virtual void notify_observer() = 0;
};

#endif