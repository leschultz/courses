#include <iostream>

int add(int x, int y);

int main()
{

    std::cout << add(2, 5) << "\n";
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
