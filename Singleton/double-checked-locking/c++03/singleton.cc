#include <boost/thread.hpp>
#include "singleton.h"

// from the implementation file
volatile Singleton* volatile Singleton::__instance = 0;

volatile Singleton* volatile Singleton::instance() 
{
    if(__instance == 0) 
    {
        boost::mutex mu;
        mutex::scoped_lock lock(mu);
        if(__instance == 0) 
        {
            // one more volatile added
            Singleton* volatile temp = new volatile Singleton;
            __instance = temp;
        }
    }
    return __instance;
}