#include <iostream>
using namespace std;

int main() {
  // Ler valores de entrada
  int initialValue, newValue;
  cin >> initialValue;
  cin >> newValue;

  // TODO: Escreva seu código abaixo
  // 1. Declare uma variável inteira chamada 'score' e inicialize-a com
  // initialValue
  int score = initialValue;
  // 2. Crie um ponteiro chamado 'scorePtr' que aponta para a variável score
  int *scorePtr = &score;
  // 3. Imprima o valor original, modifique através do ponteiro e imprima os
  // resultados
  cout << "Original score: " << score << endl;
  *scorePtr = newValue;
  cout << "Modified score: " << score << endl;
  cout << "Pointer address: " << scorePtr << endl;
  return 0;
}