#include <iostream>
#include <iomanip>

int main()
{

    double f { 0.1 };
    std::cout << f << '\n';
    std::cout << std::setprecision(17);
    std::cout << f << '\n';
    return 0;
}
