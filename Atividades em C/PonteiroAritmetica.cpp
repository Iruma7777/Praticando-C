#include <iostream>
using namespace std;

int main() {
  // Array fornecido
  int values[6] = {15, 23, 8, 42, 17, 31};

  // TODO: Crie um ponteiro chamado 'ptr' que aponte para o primeiro elemento do
  // array
  int *ptr = values;
  // TODO: Use um loop para iterar por todos os 6 elementos usando aritmética de
  // ponteiros
  // TODO: Imprima cada elemento desreferenciando o ponteiro
  // TODO: Mova o ponteiro para o próximo elemento usando aritmética de
  // ponteiros
  for (int i = 0; i < 6; i++) {
    cout << "Element: " << *ptr << endl;
    ptr++;
  }

  return 0;
}