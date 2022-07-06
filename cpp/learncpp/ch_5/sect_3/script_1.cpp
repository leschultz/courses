#include <iostream>

int main()
{
    std::cout << "Enter two values \n";
    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    if ((x % y) == 0)
        std::cout << x << " is evenly divisible by " << y << '\n';
    else
        std::cout << x << " is not evely divisible by " << y << '\n';
}
