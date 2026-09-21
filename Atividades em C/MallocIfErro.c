#include <stdio.h>
#include <stdlib.h>

int main() {
    // Leia o número de inteiros
    int n;
    scanf("%d", &n);
    int soma = 0;
    int totalmemoria = 0;
    // TODO: Escreva seu código aqui
    
    // - Use malloc() para alocar memória para n inteiros
    int *ptr = (int*)malloc(n * sizeof(int));
    // - Verifique se a alocação foi bem-sucedida
    if(ptr == NULL){
       printf("Memory allocation failed!\n");
       return -1;
    }
    // - Lide com os casos de sucesso e falha
    printf("Memory allocation successful!\n");
    // - Leia os inteiros e armazene-os
    for(int i = 0; i < n; i++){
        scanf("%d",&ptr[i]);
        soma += ptr[i];
    }
    printf("Sum: %d\n",soma);
    // - Calcule a soma e os bytes alocados
    totalmemoria += n * sizeof(int);
    printf("Bytes allocated: %d\n",totalmemoria);
    return 0;
}