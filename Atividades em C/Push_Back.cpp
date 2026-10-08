#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Lê o número de elementos a adicionar
  int n;
  cin >> n;

  // Cria um vetor vazio
  vector<int> numbers;

  // TODO: Escreva seu código aqui
  // Lê n números e adiciona-os ao vetor usando push_back()
  for (int i = 0; i < n; i++) {
    int numero;
    int tamanho;
    cin >> numero;
    numbers.push_back(numero);
    tamanho = numbers.size();
    cout << "Added " << numero << ", size is now " << tamanho << endl;
  }
  // Imprime a saída necessária após cada adição

  // Imprime o vetor final
  cout << "Final vector: ";
  // TODO: Imprime todos os elementos separados por espaços
  for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
  }
  return 0;
}