#include <iostream>
#include <vector>

int main() {
  std::vector<double> n_vector {-1.0, -2.0, -3.0, -4.0, -5.0};

  std::cout << "Initial size is " << n_vector.size() << std::endl;
  n_vector.clear();

  std::cout << "After clear() the vector size is " << n_vector.size() << std::endl;

  return 0;
}
