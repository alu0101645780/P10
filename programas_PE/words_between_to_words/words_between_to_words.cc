#include<iostream>
#include<string>
using namespace std;

int WordsBetweenToWords(const string& cadena) {
  bool foundBeginning = false;
  int contador = 0;
  size_t i = 0;
  
  while (i < cadena.length()) {
    size_t start = i;
    
    while (i < cadena.length() && cadena[i] == ' ') i++;
    start = i;
    
    while (i < cadena.length() && cadena[i] != ' ') i++;
    string word = cadena.substr(start, i - start);
    
    if (word == "beginning") {
      foundBeginning = true;
      contador = 0;
    }
    else if (word == "end") {
      if (foundBeginning) {
        return contador;
      } else {
        return -1;
      }
    } 
    else if (foundBeginning) {
      contador++;
    }
  }

  return -1;
}

int main() {
  string cadena;
  getline(cin, cadena);
  
  int result = WordsBetweenToWords(cadena);
  if (result == -1) {
    cout << "wrong sequence" << endl;
  } else {
    cout << result << endl;
  }
  return 0;
}
