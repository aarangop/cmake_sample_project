#ifndef __LIBA_H
#define __LIBA_H

#include <iostream>

class A 
{
    public:
    A() { std::cout << "hello" << std::endl; };
    ~A() { std::cout << "bye bye" << std::endl; };

    void saySomething();
};

#endif