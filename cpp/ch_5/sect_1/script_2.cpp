#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{

    int a{ getValue() };
    int b{ getValue() };
    int c{ getValue() };

    std::cout << a + (b * c);
    return 0;
}
