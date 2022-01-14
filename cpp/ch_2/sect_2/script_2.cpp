#include <iostream>

int getValueFromUser()
{
    std::cout << "enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    int num0{ getValueFromUser() };
    int num1{ getValueFromUser() };

    std::cout << num0 << "+" << num1 << " = " << num0+num1 << "\n";

    return 0;
}
