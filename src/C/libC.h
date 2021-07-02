#ifndef __LIBC_H
#define __LIBC_H

#include "libB.h"

class C
{
public:
    C() { std::cout<< "hola dice C" << std::endl; B b;}
    void sayHola();
};

#endif