#include <stdio.h>

int main() {
    // TODO: Escreva seu código aqui
    // 1. Declare e inicialize o array 'numbers' com {10, 20, 30, 40}
    int numbers[4] = {10,20,30,40};
    // 2. Declare um ponteiro para inteiro chamado 'ptr'
    int *ptr = NULL;
    ptr = numbers;
    // 3. Atribua o nome do array ao ponteiro
    // 4. Imprima todos os endereços e valores necessários
    printf("Array name address: %p\n",numbers);
    printf("First element address: %p\n",&numbers[0]);
    printf("Pointer address: %p\n",ptr);
    printf("Value via array name: %d\n",*numbers);
    printf("Value via pointer: %d\n",*ptr);
    return 0;
}