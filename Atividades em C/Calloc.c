#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    
    // Leia o tamanho do array
    scanf("%d", &size);
    int soma = 0;
    // TODO: Escreva seu código abaixo
    
    // Use calloc() para alocar memória para o array
    int *arr = calloc(size, sizeof(int));
    // Verifique se a alocação foi bem-sucedida
    if(arr == NULL){
        printf("Memory allocation failed!");
        return -1;
    }

    printf("Memory allocated and initialized to zero!\n");
    // Imprima os valores iniciais (devem ser zero)
    printf("Initial values:");
    for(int i = 0; i < size; i++){
        printf(" %d",arr[i]);
    }
    // Leia e armazene os valores de entrada
    printf("\n");
    printf("Updated values:");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        soma += arr[i];        
        printf(" %d",arr[i]);
    }
    // Imprima os valores atualizados
    printf("\n");
    printf("Sum: %d\n",soma);
    free(arr);
    printf("Memory freed!");

    // Calcule e imprima a soma
    
    // Libere a memória alocada
  return 0;
}