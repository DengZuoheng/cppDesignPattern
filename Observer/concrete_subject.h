#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H
#include "observer.h"
#include "subject.h"
#include <memory>
#include <set>
class concrete_subject:public subject
{
public:
    virtual bool register_observer(std::shared_ptr<observer>);
    virtual bool remove_observer(std::shared_ptr<observer>);
    virtual void notify_observer();
private:
    int __state;
    std::set<std::shared_ptr<observer>> __observers;
public:
    int get_state() const;
    void set_state(int);
};

#endif