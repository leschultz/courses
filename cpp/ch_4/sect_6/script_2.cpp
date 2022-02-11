#include <cstdint>
#include <iostream>

int main()
{
    std::cout << sizeof(std::int_least8_t)*8 << " bits\n";
    std::cout << sizeof(std::int_least16_t)*8 << " bits\n";
    std::cout << sizeof(std::int_least32_t)*8 << " bits\n";
    std::cout << sizeof(std::int_fast8_t)*8 << " bits\n";
    std::cout << sizeof(std::int_fast16_t)*8 << " bits\n";
    std::cout << sizeof(std::int_fast32_t)*8 << " bits\n";
    return 0;
}
