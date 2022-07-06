#include <iostream>

int main()
{
    std::cout << "Enter two nubmers separated by a space: ";

    int x{ }, y { };
    std::cin >> x >> y;

    std::cout << "You entered " << x << "and " << y << "\n";
    return 0;
}
