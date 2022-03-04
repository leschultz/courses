#include <iostream>
#include <cstdint>

int main()
{
    std::int8_t myint{65};
    std::cout << static_cast<int>(myint);

    return 0;
}
