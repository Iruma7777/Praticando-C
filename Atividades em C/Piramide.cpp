#include <iostream>

void imprimirPiramide(int n) {

  for (int i = 0; i < n; i++) {
    std::cout << '*';
  }
}

int main() {
  int n;
  std::cin >> n;
  
  for (int i = 1; i <= n; i += 2) {
    imprimirPiramide(i);
    std::cout << std::endl;
  }

  return 0;
}