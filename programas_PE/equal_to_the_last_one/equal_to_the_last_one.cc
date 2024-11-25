#include<iostream>
#include<vector>
using namespace std;

int EqualToTheLastOne(const vector<int>& vect) {
  int contador{0};
  unsigned int size = vect.size();
  for (int i{0}; i < size - 1; i++) {
    if (vect[i] == vect[size - 1]) {
      contador++;
    }
  }
  return contador;
}

int main() {
  int n;
  cin >> n;
  vector<int> vect(n);
  for (int i = 0; i < n; i++) {
    cin >> vect[i];
  }
  cout << EqualToTheLastOne(vect) << endl;
}
