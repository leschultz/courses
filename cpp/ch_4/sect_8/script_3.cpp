#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setprecision(16); // show 16 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f << '\n';
    std::cout << 3.33333333333333333333333333333333333333 << '\n';
    return 0;
}
