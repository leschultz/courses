#include <iostream>

int main()
{
    std::cout << "Not fractional result: " << 20 / 4 << "\n";
    std::cout << "Fractional result unexpected: " << 8 / 5 << "\n";
    double x{ 8.0 };
    double y{ 500.0 };
    std::cout << "Fractional result expected: " << x / y << "\n";
    return 0;
}
