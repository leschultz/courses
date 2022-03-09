#include <iostream>
#include <string>

int main()
{
    std::cout << "Pick 1 or 2:";
    int choice{};
    std::cin >> choice;

    std::cout << "Now your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Your name is " << name << " and you picked " << choice << '\n';
    return 0;
}
