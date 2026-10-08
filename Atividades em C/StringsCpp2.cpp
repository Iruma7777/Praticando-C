#include <iostream>
#include <string>

void stringSearchOperations(std::string str) {
  // Encontrar o primeiro espaço
  int pos = str.find(" ");
  std::cout << "Space Found At: " << pos << std::endl;
  // Apagar 4 caracteres a partir da posição 5
  str.erase(5, 4);
  std::cout << "After Erase: " << str << std::endl;
  // Verificar se contém "You"
  int encontrar = str.find("You");
  std::string achou;
  if (encontrar == -1) {
    achou = "Not Found";
  } else {
    achou = "Found";
  }
  std::cout << "Contains You: " << achou << std::endl;
  // Limpar a string e verificar se está vazia
  str.clear();
  std::string vazia;
  if (str.empty() == 1) {
    vazia = "true";
  } else {
    vazia = "false";
  }
  std::cout << "Is Empty: " << vazia << std::endl;
}

int main() {
  std::string str;
  std::getline(std::cin, str);
  stringSearchOperations(str);
  return 0;
}