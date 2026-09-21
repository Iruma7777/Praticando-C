#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    int soma = 0;
    int max;
    // Leia o número de inteiros para armazenar
    scanf("%d", &count);
    
    // TODO: Escreva seu código abaixo
   
    // 1. Alocar memória usando malloc() com sizeof()
    int *ptr = (int *) malloc(count * sizeof(int));
    // 2. Verificar se a alocação foi bem-sucedida
    if (ptr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }
    else{
        printf("Memory allocated successfully!\n");
    }
    // 3. Ler os valores inteiros e armazená-los
    for(int i = 0; i < count; i++){
        scanf("%d",&ptr[i]);
        soma += ptr[i];
        if(i == 0 || ptr[i] > max){
            max = ptr[i];
        } 
    }
    // 4. Calcular a soma e encontrar o máximo
    printf("Sum: %d\n",soma);
    printf("Maximum: %d\n",max);
    // 5. Liberar a memória alocada
    free(ptr);
    printf("Memory freed successfully!");
    
    return 0;
}