#include <iostream>

int main()
{

    unsigned short x{ 0 };  // largest 16 git
    std::cout << "x was: " << x << '\n';

    x = -1;  // wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2;  // wrap-around

    std::cout << "x is now: " << x << '\n';

    return 0;

}
