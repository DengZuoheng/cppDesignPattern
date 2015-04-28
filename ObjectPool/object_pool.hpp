#ifndef object_pool_hpp
#define object_pool_hpp
#include <memory>
#include <utility>
#include <algorithm>
#include <vector>

template<typename T>
class object_pool
{
private:
    object_pool();
public:
    typedef std::pair<bool,std::shared_ptr<T>> pair_type;
    typedef std::vector<pair_type> set_type;

    static set_type& __instance__()
    {
        static set_type __set;
        return __set;
    }

    static std::shared_ptr<T> get_instance()
    {
        set_type& _set = __instance__();
        auto it = std::find_if(_set.begin(), _set.end(),
            [](const pair_type& p){return p.first;});
        if (it!=_set.end())
        {
            it->first=false;
            return it->second;
        }
        _set.push_back(pair_type(false, std::make_shared<T>()));
        return _set.back().second;       
    }

    static void release_instance(std::shared_ptr<T> _ptr)
    {
        set_type& _set = __instance__();
        auto it = std::find(_set.begin(), _set.end(), pair_type(false, _ptr));
        if(it!=_set.end())
        {
            it->first = true;
        }
    }
};

#endif