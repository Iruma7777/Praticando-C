#include <iostream>
#include <vector>

double prod(double arr[], int size) {
  // Escreva seu código abaixo
  double soma = 1;
  for (int i = 0; i < size; i++) {
    soma = soma * arr[i];
  }
  return soma;
}

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

  double result = prod(arr, n);
  std::cout << "Product of array elements: " << result << std::endl;
  return 0;
}