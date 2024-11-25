#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime> 

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

std::vector<double> CalculateMaxMinProm(const std::vector<double>& vector) {
	double max{5}, min{10}, prom{0};
	for(int i{0}; i < vector.size(); ++i) {
		if(vector[i] > max) {
      max = vector[i];
    }
    if(vector[i] < min) {
      min = vector[i];
    }
    prom += vector[i];
	}
	prom /= vector.size();
	return {max, min, prom};
}

int main() {
std::vector<double> my_vector = GenerateVector(30, 5.0, 10.0);
for (const auto& value: my_vector) {
  std::cout << "Component: " << value << std::endl;
}
  std::cout << "Max: " << CalculateMaxMinProm(my_vector)[0] << std::endl;
	std::cout << "Min: " << CalculateMaxMinProm(my_vector)[1] << std::endl;
  std::cout << "Prom: " << CalculateMaxMinProm(my_vector)[2] << std::endl;
  return 0;
}