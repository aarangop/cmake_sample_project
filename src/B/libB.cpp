#include "libB.h"

B::B() :
    _a(A())
{
    std::cout << "Hello from lib B" << std::endl;
    _a.saySomething();
}