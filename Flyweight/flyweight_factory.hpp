#ifndef flyweight_factory_h
#define flyweight_factory_h
#include <map>
#include <utility>
#include <boost/smart_ptr.hpp>
#include "flyweight.h"
#include "concrete_flyweight.h"
#include "unshared_concrete_flyweight.h"
using boost::shared_ptr;
using boost::make_shared;
template<typename KeyType>
class flyweight_factory
{
private:
    typedef std::map<KeyType,shared_ptr<concrete_flyweight> > flyweight_pool_type;
    flyweight_pool_type flyweight_pool;
    shared_ptr<concrete_flyweight> concrete_flyweight_from_key(const KeyType& key)
    {
        return boost::make_shared<concrete_flyweight>(key);
    }
public:
    flyweight_factory(){}
    shared_ptr<flyweight> unshared_flyweight_from_key(const KeyType& key)
    {
		typedef flyweight_pool_type::iterator iter_type;
        iter_type it=flyweight_pool.find(key);
        if(it==flyweight_pool.end()){
            shared_ptr<concrete_flyweight> new_intri = concrete_flyweight_from_key(key);
            std::pair<iter_type,bool> r = flyweight_pool.insert(std::make_pair(key,new_intri));
            it = r.first;
        }
		weak_ptr<concrete_flyweight> wptr(it->second);
        return boost::make_shared<unshared_concrete_flyweight>(wptr,0);
    }
};


#endif