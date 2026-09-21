#include <stdio.h>

// TODO: Escreva sua função displayValue aqui
void displayValue(int *ptr){
    printf("Value at address: %d\n",*ptr);
}



int main() {
    // TODO: Escreva seu código aqui

    // 1. Declare e inicialize a variável number
    int number = 42;
    // 2. Imprima o valor original
    printf("Original value: %d\n",number);
    // 3. Chame a função displayValue
    displayValue(&number);
    // 4. Imprima a mensagem de conclusão
    printf("Function call completed\n");
    return 0;
}