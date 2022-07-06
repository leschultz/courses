#include <iostream>

void print(int i)
{
	std::cout << "Hello" << std::endl;
}

int main()
{
	int n = 3;
	for (int i = 0; i < n; i++)
	{
		print(i);
	}
	return 0;
}
