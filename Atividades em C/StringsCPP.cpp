#include <iostream>
#include <string>

void stringOperations(std::string str) {
  // 1. Imprimir o comprimento da string
  std::cout << "Length: " << str.length() << std::endl;
  // 2. Anexar " - Modified" à string
  str.append(" - Modified");
  std::cout << "Append: " << str << std::endl;
  // 3. Inserir "C++ " no início
  str.insert(0, "C++ ");
  std::cout << "Insert: " << str << std::endl;

  // 4. Extrair substring de comprimento 5 começando na posição 5
  std::string sub;
  sub = str.substr(5, 5);
  std::cout << "Extract: " << sub << std::endl;
  // 5. Substituir a substring na posição 5 por "Awesome"
  str.replace(5, 5, "Awesome");
  std::cout << "Replace: " << str << std::endl;
}

int main() {
  std::string str;
  std::getline(std::cin, str);
  stringOperations(str);
  return 0;
}