#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void DesordenarVector(std::vector<int>& vector) {
  std::srand(std::time(0));
  for (std::size_t i = 0; i < vector.size(); ++i) {
    std::size_t indiceAleatorio = i + std::rand() % (vector.size() - i);
    std::swap(vector[i], vector[indiceAleatorio]);
  }
}

int main() {
  std::vector<int> miVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "Vector original: ";
  for (const auto& valor : miVector) {
    std::cout << valor << " ";
  }
  std::cout << "\n";

  DesordenarVector(miVector);

  std::cout << "Vector desordenado: ";
  for (const auto& valor : miVector) {
    std::cout << valor << " ";
  }
  std::cout << "\n";

  return 0;
}
