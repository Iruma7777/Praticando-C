#include <iostream>

int main() {
  int n;

  std::cin >> n;
  std::cin.ignore();
  std::string arr[n];

  for (int i = 0; i < n; i++) {
    std::string val;
    std::cin >> val;
    arr[i] = val;
  }

  // Imprime o array de forma elegante
  std::cout << "[";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i];
    if (i == n - 1) {
      continue;
    }
    std::cout << ", ";
  }
  std::cout << "]";

  return 0;
}