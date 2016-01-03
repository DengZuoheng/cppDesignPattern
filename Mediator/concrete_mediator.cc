#include "concrete_mediator.h"

concrete_mediator::concrete_mediator(){}

concrete_mediator::~concrete_mediator(){}

void concrete_mediator::operate(int id, const std::string& msg)
{
	std::map<int, weak_ptr<colleague>>::iterator it = colg_map.find(id);
    if(it!=colg_map.end()){
        shared_ptr<colleague> ptr=it->second.lock();
		if (ptr){
			try{
				ptr->recv_msg(msg);
			}
			catch (...){
			}
		}
    }
}

bool concrete_mediator::registe(int id, shared_ptr<colleague> colg)
{
    if(!colg) return false;
    weak_ptr<colleague> wptr(colg);
    colg_map[id]=wptr;
	shared_ptr<mediator> this_ptr = shared_from_this();
	if (!this_ptr) return false;
    //colg->set_mediator(this_ptr);
	return true;
}