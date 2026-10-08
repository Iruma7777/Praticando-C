#include <iostream>
using namespace std;

int main() {
    // Ler valores de entrada
    int firstValue, secondValue;
    cin >> firstValue;
    cin >> secondValue;
    
    // TODO: Escreva seu código abaixo
    // 1. Alocar memória usando new e armazenar em dynamicPtr
    int *dynamicPtr = new int;
    // 2. Atribuir firstValue à memória alocada
    *dynamicPtr = firstValue;
    // 3. Imprimir o valor inicial
    cout << "Initial value: " << *dynamicPtr << endl;
    // 4. Atualizar com secondValue
    *dynamicPtr = secondValue;
    // 5. Imprimir o valor atualizado
    cout << "Updated value: " << *dynamicPtr << endl;
    // 6. Deletar a memória e definir o ponteiro como nullptr
    delete dynamicPtr;
    // 7. Imprimir mensagem de confirmação  << endl
    dynamicPtr = nullptr;
    cout << "Memory freed successfully" << endl;
    
    return 0;
}