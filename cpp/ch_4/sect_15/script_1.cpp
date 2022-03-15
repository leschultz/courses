#include <iostream>

void printInt(const int x)
{
    std::cout << x;
}

int main()
{

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int userAge { age };

    std::cout << "Your age is: ";
    printInt(age);

    return 0;
}
