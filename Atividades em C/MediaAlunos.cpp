#include <iostream>

double calculateAverageGrade(int grades[], int size) {
  // Escreva seu código aqui
  double media = 0;
  for (int i = 0; i < size; i++) {
    media += grades[i];
  }
  media = media / size;
  return media;
}

int main() {
  int n;

  std::cin >> n;
  std::cin.ignore();
  int arr[n];

  for (int i = 0; i < n; i++) {
    int val;
    std::cin >> val;
    arr[i] = val;
  }

  double averageGrade = calculateAverageGrade(arr, n);
  std::cout << "Average grade: " << averageGrade << std::endl;
  return 0;
}