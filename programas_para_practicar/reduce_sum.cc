#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime> 

double ReduceSum(const std::vector<double>& numbers) {
  double sum{0.0};
  for(int i{0}; i < numbers.size(); ++i) {
		sum += numbers[i];
  }
	return sum;
}

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
	std::srand(std::time(0));
	std::vector<double> result;
	result.reserve(size);
	for(int i{0}; i < size; i++) {
		double random = static_cast<double>(std::rand()) / RAND_MAX;
		double scaled = lower + random * (upper - lower);
		result.push_back(scaled);
	}
	return result; 
}

int main() {
	std::vector<double> my_vector = GenerateVector(30, 5.0, 10.0);
		for (const auto& value: my_vector) {
  	std::cout << "Component: " << value << std::endl;
		}
	std::cout << ReduceSum(my_vector) << std::endl;
  return 0;
}