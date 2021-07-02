#include "libB.h"

B::B() :
    _a(A())
{
    std::cout << "Hello from B" << std::endl;
    _a.saySomething();
}

B::~B()
{
    std::cout << "Arrivederci sagt B" << std::endl;
}