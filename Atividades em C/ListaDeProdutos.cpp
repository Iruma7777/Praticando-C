#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Leia o número de produtos
  int n;
  cin >> n;

  // Crie um vector para armazenar os nomes dos produtos
  vector<string> products;

  // Leia os nomes dos produtos e adicione-os ao vector
  for (int i = 0; i < n; i++) {
    string product;
    cin >> product;
    products.push_back(product);
  }

  // TODO: Escreva seu código abaixo
  // Use um loop for tradicional para percorrer o vector
  // e imprima cada produto com seu número de posição
  for (int i = 0; i < products.size(); i++) {
    cout << "Product " << i + 1 << ": " << products.at(i) << endl;
  }

  return 0;
}