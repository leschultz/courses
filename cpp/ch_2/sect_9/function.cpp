#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "pritn";
#endif
#ifndef PRINT
    std::cout << "not print";
#endif
}
