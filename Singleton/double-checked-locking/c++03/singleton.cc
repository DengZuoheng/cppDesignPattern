#include <boost/thread.hpp>
#include "singleton.h"

// from the implementation file
volatile singleton* volatile singleton::__instance = 0;
boost::mutex singleton::__mtx;

volatile singleton* volatile singleton::instance() 
{
    if(__instance == 0) 
    {
        boost::mutex::scoped_lock lock(__mtx);
        if(__instance == 0) 
        {
            // one more volatile added
            volatile singleton* volatile temp = new volatile singleton;
            __instance = temp;
        }
    }
    return __instance;
}

singleton::singleton()
{
    //pass
}