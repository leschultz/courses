#include <iostream>


int main()
{

    std::cout << sizeof(bool) << '\n';
    std::cout << sizeof(char) << '\n';
    std::cout << sizeof(wchar_t) << '\n';
    std::cout << sizeof(char16_t) << '\n';
    std::cout << sizeof(char32_t) << '\n';
    std::cout << sizeof(short) << '\n';
    std::cout << sizeof(int) << '\n';
    std::cout << sizeof(long) << '\n';
    std::cout << sizeof(long long) << '\n';
    std::cout << sizeof(float) << '\n';
    std::cout << sizeof(double) << '\n';
    
    int x{};
    std::cout << "x is size of: " << sizeof(x) << '\n';

    return 0;
}
