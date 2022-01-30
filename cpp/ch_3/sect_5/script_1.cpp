#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
#ifndef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif

    std::cout << "Enter your integer: \n";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
    int x{getUserInput()};
    std::cout << "You entered: " << x;
    return 0;
}
