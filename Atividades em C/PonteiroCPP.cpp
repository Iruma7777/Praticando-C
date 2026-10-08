#include <iostream>
using namespace std;

int main() {
  // Ler valores de entrada
  int initialValue, newValue;
  cin >> initialValue;
  cin >> newValue;

  // TODO: Escreva seu código abaixo
  // 1. Declare a variável temperature e inicialize com initialValue
  int temperature = initialValue;
  // 2. Crie o ponteiro tempPtr apontando para temperature
  int *tempPtr = &temperature;
  // 3. Print original value using pointer dereference
  std::cout << "Original value: " << *tempPtr << std::endl;
  // 4. Altere o valor de temperature através do ponteiro usando newValue
  *tempPtr = newValue;
  // 5. Imprima o novo valor usando desreferência do ponteiro
  std::cout << "New value: " << *tempPtr << std::endl;
  return 0;
}