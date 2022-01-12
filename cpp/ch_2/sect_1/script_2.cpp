#include <iostream>

// User function
void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}

// Regular main
int main()
{
    std::cout << "Start of main()\n";
    doA();
    std::cout << "Ending main()\n";
    return 0;
}
