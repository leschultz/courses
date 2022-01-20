#include <iostream>

int add(int x, int y);

int main()
{
    int x{ 5 };
    int y{ 6 };
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << "\n";
    return 0;
}
