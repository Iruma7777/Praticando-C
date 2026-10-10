#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Leia o número de cidades
  int n;
  cin >> n;

  // Crie um vetor para armazenar os nomes das cidades
  vector<string> cities;

  // Leia os nomes das cidades e adicione-os ao vetor
  for (int i = 0; i < n; i++) {
    string city;
    cin >> city;
    cities.push_back(city);
  }

  // TODO: Escreva seu código abaixo
  // Use um loop for baseado em intervalo para iterar pelo vetor cities
  // Imprima cada cidade com seu comprimento usando o formato especificado
  // After the loop, print the total number of cities processed
  for (const string &city : cities) {
    cout << "City: " << city << " (Length: " << city.length() << ")" << endl;
  }
  cout << "Total cities processed: " << cities.size();

  return 0;
}