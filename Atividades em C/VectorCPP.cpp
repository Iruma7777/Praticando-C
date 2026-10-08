#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Leia os valores de entrada
  int val1, val2, val3, val4, val5;
  cin >> val1 >> val2 >> val3 >> val4 >> val5;

  // TODO: Escreva seu código abaixo
  // Crie um vetor chamado 'numbers' e inicialize-o com os valores de entrada
  std::vector<int> numbers = {val1, val2, val3, val4, val5};
  // Imprima cada elemento usando o formato solicitado
  for (int i = 0; i < numbers.size(); i++) {
    cout << "Element " << i << ": " << numbers[i] << endl;
  }
  // Imprima o tamanho do vetor
  cout << "Vector size: " << numbers.size();
  return 0;
}