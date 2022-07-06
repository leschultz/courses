#include <iostream>

int main()
{
    unsigned int u { 5u };
    int s { static_cast<int>(u) };
    std::cout << s;
    return 0;
}
