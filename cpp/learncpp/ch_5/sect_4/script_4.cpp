#include <iostream>

int add( int x, int y)
{
    return x + y;
}

int main()
{

    int x{ 5 };
    int value{ add(x, ++x) };

    std::cout << value << '\n';
    return 0;
}
