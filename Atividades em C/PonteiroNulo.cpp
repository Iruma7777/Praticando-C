#include <iostream>
#include <string>
using namespace std;

int main() {
  // Ler a entrada
  string input;
  cin >> input;

  // Declare a variável data
  int data = 42;

  // TODO: Escreva seu código aqui
  // - Declare um ponteiro chamado ptr
  int *ptr;
  // - Verifique a entrada e atribua o valor apropriado a ptr
  if (input == "valid") {
    ptr = &data;
  } else if (input == "null") {
    ptr = nullptr;
  }
  // - Use if-statement para verificar e usar o ponteiro com segurança
  if (ptr == NULL) {
    cout << "Pointer is null - cannot dereference";
  } else {
    cout << "Value: " << *ptr << endl;
  }
  return 0;
}