#include <cstring>
#include <iostream>


void printStringInfo(char str[]) {
  // Imprime a string
  std::cout << "String: " << str << std::endl;

  // Imprime o comprimento da string
  std::cout << "Length: " << strlen(str) << std::endl;

  // Imprime o caractere no índice 4
  std::cout << "Character at index 4: " << str[4] << std::endl;

  // Modifica o primeiro caractere para 'X'
  str[0] = 'X';

  // Imprime a string modificada
  std::cout << "Modified string: " << str << std::endl;
}

int main() {
  char message[] = "Hello, World!";

  printStringInfo(message);

  return 0;
}