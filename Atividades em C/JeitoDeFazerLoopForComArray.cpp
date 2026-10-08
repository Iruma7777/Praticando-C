#include <iostream>
#include <string>

int main() {
  // Inicializa o array de frutas
  std::string fruits[] = {"apple", "banana", "orange", "grape", "kiwi"};

  // Usa um loop for aprimorado para iterar sobre o array
  for (std::string fruta : fruits) {
    std::cout << fruta << std::endl;
  }
  return 0;
}