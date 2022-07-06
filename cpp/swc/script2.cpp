#include <iostream>
#include <array>

int main()
{
	std::array<double, 4> n_vector {2., 3., 4., -10.};

	std::cout << "This 4-vector has time component " << n_vector[3] << std::endl;

	n_vector[3] = 7.5;
	std::cout << "This 4-vector now has time component " << n_vector[3] << std::endl;
	n_vector[0]++;
	std::cout << "The first element of vector is " << n_vector.front() << " and the last is " << n_vector.back() << std::endl;
	std::cout << " The vector size is " << n_vector.size() << std::endl;
	return 0;
}
