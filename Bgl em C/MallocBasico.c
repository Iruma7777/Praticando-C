#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ler a entrada
    int input_value;
    scanf("%d", &input_value);
    
    // TODO: Escreva seu código abaixo

    // 1. Use malloc() para alocar memória para um inteiro
    int *ptr = (int *) malloc(sizeof(int));
    // 2. Converta (cast) o ponteiro retornado para int*
    *ptr = input_value;
    // 3. Armazene o valor de entrada na memória alocada
    
    // 4. Imprima o valor armazenado
    printf("Stored value: %d\n",*ptr);
    // 5. Calcule e armazene o quadrado no mesmo local
    *ptr = *ptr * *ptr;
   
    // 6. Imprima o valor ao quadrado
    printf("Squared value: %d\n",*ptr);
    return 0;
}