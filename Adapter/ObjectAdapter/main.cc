#include <memory>
#include "target.h"
#include "adapter.h"
#include "adaptee.h"

using namespace std;

int main()
{
    shared_ptr<target> ptar = make_shared<adapter>();
    ptar->_interface();
    return 0;
}