#include <iostream>

int getValue()
{
    std::cout << "Enter a value: ";

    int x{};
    std::cin >> x;
    return x;
}

void writeValue(int x)
{
    std::cout << "Tehe value of x is: " << x << '\n';
}

int main()
{
    writeValue(getValue());
}
