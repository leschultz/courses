#include <iostream>

int main()
{

    unsigned short x{ 65535 };  // largest 16 git
    std::cout << "x was: " << x << '\n';

    x = 65536;  // wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537;  // wrap-around

    std::cout << "x is now: " << x << '\n';

    return 0;

}
