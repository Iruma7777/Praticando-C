#include <stdio.h>

// Escreva sua função findAverage aqui
float soma = 0;
float findAverage(int numbers[], int size){
    for(int i = 0; i < size; i++){
        soma += numbers[i];
    }
    return soma / size;
}


int main() {
    int size;
    scanf("%d", &size);
    
    int numbers[size];
    
    // Leia os elementos do array
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Chame sua função e imprima o resultado
    float average = findAverage(numbers, size);
    printf("Average: %.2f\n", average);
    
    return 0;
}
