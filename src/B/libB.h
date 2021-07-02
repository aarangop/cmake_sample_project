#ifndef __LIB_B
#define __LIB_B

#include <iostream>
#include "libA.h"

class B
{
public:
    B();
    ~B();

    void saySomething();

private:
    A _a;
};

#endif