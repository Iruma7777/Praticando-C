#include <stdio.h>

// TODO: Escreva sua função tripleValue aqui
void tripleValue(int *ptr){
    *ptr = *ptr * 3;
    printf("Value tripled to: %d\n",*ptr);
}

int main() {
    // TODO: Escreva seu código aqui

    // Declare e inicialize a variável number
    int number = 8;
    // Imprima o valor original
    printf("Original value: %d\n",number);
    // Chame a função tripleValue
    tripleValue(&number);
    // Imprima o valor final
    printf("Final value: %d\n",number);
    return 0;
}