#include <iostream>
#include <string>

std::string concatenateStrings(std::string str1, std::string str2) {
  // Concatena as strings e retorna o resultado
  std::string resultado = str1;
  resultado += " ";
  resultado += str2;

  return resultado;
}

int main() {
  std::string firstName;
  std::string lastName;
  std::getline(std::cin, firstName);
  std::getline(std::cin, lastName);

  // Chama concatenateStrings e armazena o resultado em fullName
  std::string fullName = concatenateStrings(firstName, lastName);

  // Imprime fullName
  std::cout << fullName;

  return 0;
}