#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

void printValue(int x)
{
    std::cout << x << '\n';
}

int add(int x, int y)
{
    return x + y;
}

void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int main()
{
    printValues(2, 7);
    printValue(1);
    std::cout << add(1,2) << '\n';
    doPrint();
    return 0;
}
