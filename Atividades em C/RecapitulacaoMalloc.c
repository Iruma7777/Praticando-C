#include <stdio.h>
#include <stdlib.h>

int main() {
    // Leia o número de elementos
    int n;
    scanf("%d", &n);
    int soma = 0;
    int tamanhoBytes;
    int media = 0;
    int acimaMedia = 0; 
    
    // TODO: Escreva seu código abaixo
    
    // 1. Alocar memória para n inteiros usando malloc()
    int *ptr = (int*)malloc(n * sizeof(int));
    
    // 2. Verifique se a alocação foi bem-sucedida
    if(ptr == NULL){
        printf("Memory allocation failed!");
        return -1;
    }
    printf("Array of size %d created successfully!\n",n);
    // 3. Leia n inteiros para o array
    for(int i = 0; i < n; i++){
        scanf("%d",&ptr[i]);
        soma += ptr[i];
    }
    int min = ptr[0];
    for(int i = 0; i < n; i++){
        if(ptr[i] < min){
         min = ptr[i];
        }
    }
    
    // 4. Calcule a soma, encontre o mínimo, conte os elementos acima da média
    media = soma / n;
    for(int j = 0; j < n; j++){
        if(ptr[j] > media){
            acimaMedia++;
        }
    }
    tamanhoBytes += n * sizeof(int);
    printf("Sum: %d\n",soma);
    printf("Minimum: %d\n",min);
    printf("Elements above average: %d\n",acimaMedia);
    printf("Memory used: %d bytes\n",tamanhoBytes);
    // 5. Imprima os resultados e libere a memória
    free(ptr);
    printf("Memory successfully freed!");


    return 0;
}