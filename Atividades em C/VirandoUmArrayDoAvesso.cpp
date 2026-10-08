
#include <iostream>
#include <vector>

int main() {
  int n;

  std::cin >> n;
  std::cin.ignore();
  double arr[n];

  for (int i = 0; i < n; i++) {
    double val;
    std::cin >> val;
    arr[i] = val;
  }

  double reverseArr[n];
  // Escreva seu código abaixo
  for (int i = n - 1, j = 0; i != -1; i--, j++) {
    reverseArr[j] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    std::cout << reverseArr[i] << std::endl;
  }
  return 0;
}