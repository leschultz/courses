#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::cin >> name;

    std::cout << "Enter age: ";
    std::string age{};
    std::cin >> name;

    std::cout << "Your name is " << name << " age is " << age << '\n';
    return 0;
}
