#include <iostream>

int main()
{
    std::cout << "Enter an integer\n";

    int num{ }; // Define a varaible num
    std::cin >> num;
    std::cout << "The number was " << num << "and the double of it is " << 2*num << "\n";
    return 0;
}
