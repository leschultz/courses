#include <cstdint>
#include <iostream>

int main()
{
    std::uint_fast16_t sometype {0};
    --sometype;  // intetional overflow

    std::cout << sometype;
    return 0;
}
