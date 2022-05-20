#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int main()
{

	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;

	if (x >= 2)
	{
		std::cout << "Your value of " << x;
		if (x >= 5)
			std::cout << " is >= 5\n";
		else
			std::cout << " is < 5 but >= 2\n";
	}
	else
		std::cout << "Value is less than 2\n";
	return 0;
}
