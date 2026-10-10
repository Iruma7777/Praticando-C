#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Leia o número de elementos a adicionar
  int n;
  cin >> n;

  // Crie um vetor vazio
  vector<int> myVector;

  // Leia e insira n elementos
  for (int i = 0; i < n; i++) {
    int element;
    cin >> element;
    // Insira o elemento no vetor
    myVector.push_back(element);
  }

  // Leia o número de elementos a remover
  int m;
  cin >> m;

  // TODO: Escreva seu código abaixo
  // 1. Imprima o tamanho inicial do vetor
  // 2. Para cada elemento a remover, encontre-o, use .erase() e imprima o
  // tamanho após cada remoção
  // 3. Imprima os elementos restantes no vetor
  cout << "Initial size: " << myVector.size() << endl;
  for (int i = 0; i < m; i++) {
    int num;
    cin >> num;
    auto it = std::find(myVector.begin(), myVector.end(), num);

    cout << "After removing " << num;

    if (it != myVector.end()) {
      myVector.erase(it);
    }
    cout << ": size = " << myVector.size() << endl;
  }
  cout << "Remaining elements:";
  for (const int &resto : myVector) {
    cout << " " << resto;
  }

  return 0;
}