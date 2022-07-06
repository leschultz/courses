#include <iostream>

void printInt(int age)
{
    std::cout << age;
}

int main()
{

    constexpr double gravity { 9.8};
    constexpr int sum { 4 + 5};

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int userAge { age };

    std::cout << "Your age is: ";
    printInt(age);

    return 0;
}
