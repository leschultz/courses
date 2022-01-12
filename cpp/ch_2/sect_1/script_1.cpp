#include <iostream>

// User function
void myPrint()
{
    std::cout << "Function print\n";
}

// Regular main
int main()
{
    std::cout << "Start of main()\n";
    myPrint();
    myPrint();
    std::cout << "Ending main()\n";
    return 0;
}
