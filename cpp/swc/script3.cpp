#include <iostream>
#include <vector>

int main()
{
	std::vector<double> n_vector {};
	n_vector.push_back(1.5);
	n_vector.push_back(2.7);

	std::cout << "Vector element are " << n_vector[0] << " and " << n_vector[1] << " and the size is " << n_vector.size() << std::endl;

	std::cout << "Vector now has " << n_vector.size() << " elements and the last value is " << n_vector[n_vector.size()-1] << std::endl;

	return 0;
}
