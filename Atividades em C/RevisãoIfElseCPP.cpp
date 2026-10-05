#include <iostream>

int main() {
  int age, height;
  bool hasAdult;
  std::cin >> age >> height >> hasAdult; // Não altere esta linha

  // Escreva seu código abaixo
  if (age >= 12) {
    if (height >= 150) {
      // consegue ir
      if (age >= 15) {
        std::cout << "You can ride by yourself!" << std::endl;
        return 0;
      } else if (hasAdult == 1) {
        std::cout << "You can ride with adult supervision!" << std::endl;
        return 0;
      } else if (hasAdult != 1) {
        std::cout << "Sorry, you need an adult with you" << std::endl;
        return 0;
      }
    } else {
      std::cout << "Sorry, you are not tall enough" << std::endl;
    }
  } else {
    std::cout << "Sorry, you are too young" << std::endl;
  }
  return 0;
}