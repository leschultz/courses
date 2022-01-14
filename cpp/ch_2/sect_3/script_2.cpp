#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter a number\n";
    int num{};
    std::cin >> num;

    return num;
}

void printDouble(int value)
{
    std::cout << value << " double is: " << value*2 << "\n";
}

int main()
{
    int num{ getValueFromUser() };
    printDouble(num);

    // Or do
    
    printDouble( getValueFromUser() );
    return 0;
}
