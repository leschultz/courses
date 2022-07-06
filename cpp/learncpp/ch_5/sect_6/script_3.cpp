#include <algorithm>
#include <cmath>
#include <iostream>

bool approximatelyEqual(double a, double b, double epsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    double diff{ std::abs(a - b) };
    if (diff <= absEpsilon)
        return true;
    return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{
    double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    std::cout << approximatelyEqual(a, 1.0, 1e-8) << '\n';
    std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << '\n';
    std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << '\n';

    return 0;
}
