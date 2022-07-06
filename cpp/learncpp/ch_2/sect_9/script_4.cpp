#include <iostream>

void foo()
{
    #define MY_NAME "leschultz"
}

int main()
{
    std::cout << "My name is " << MY_NAME;
    return 0;
}
