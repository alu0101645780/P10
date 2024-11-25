#include<iostream>
#include<vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
  if (m >= v.size()) m = v.size() - 1;
  double max = v[0];
  int position = 0;
  for (int i = 1; i <= m; i++) {
    if (v[i] > max) {
      max = v[i];
      position = i;
    }
  }
  return position;
}

int main() {
  int n, m;
  cout << "Introduce el tamaño del vector: ";
  cin >> n;
  vector<double> v(n);
  cout << "Introduce los elementos del vector: ";
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << "Introduce el valor de m: ";
  cin >> m;

  if (m < 0) {
    cout << "El valor de m no puede ser negativo." << endl;
    return 1;
  }

  int pos = position_maximum(v, m);
  cout << "La posición del valor máximo en v[0.." << m << "] es: " << pos + 1 << endl;
  cout << "El valor máximo es: " << v[pos] << endl;

  return 0;
}

