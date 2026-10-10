#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Ler entrada
  int n;
  cin >> n;

  vector<int> data;

  // Ler n inteiros e adicioná-los ao vetor
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    data.push_back(num);
  }

  int index1, index2;
  cin >> index1;
  cin >> index2;

  // TODO: Escreva seu código abaixo
  int value1;
  int value2;
  // Acesse os elementos usando o operador [] e o método .at()
  value1 = data[index1];
  value2 = data.at(index2);
  // Armazene os valores acessados em value1 e value2

  // Saída dos resultados
  cout << "Element at index " << index1 << ": " << value1 << endl;
  cout << "Element at index " << index2 << ": " << value2 << endl;
  cout << "First element: " << data[0] << endl;
  cout << "Last element: " << data.at(data.size() - 1) << endl;

  return 0;
}