#include <iostream>
#include <string>

int main() {
  int n;
  int index;
  std::string troca;

  std::cin >> n;
  std::cin >> index;
  std::cin.ignore();
  std::getline(std::cin, troca);
  std::string arr[n];

  for (int i = 0; i < n; i++) {

    std::cin >> arr[i];
  }

  arr[index] = troca;

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}