#include <stdio.h>
#include <stdlib.h>

int main() {
    // Leia o número de elementos
    int n;
    scanf("%d", &n);
    
    // TODO: Escreva seu código abaixo
    double media = 0;
    int totalBytes = 0; 
    double mediaResultado;
    double maior;
    // 1. Aloque memória para n valores double usando malloc() e sizeof()
    double *ptr = (double *) malloc(n * sizeof(double));
    // 2. Converta (cast) o ponteiro retornado para double*
    // 3. Leia n valores double e armazene-os no array alocado
    for(int i = 0; i < n; i++){
        scanf("%lf",&ptr[i]);
        media += ptr[i];
        if(i == 0 || ptr[i] > maior){
            maior = ptr[i];
        }
    }
    // 4. Calcule e imprima a memória alocada em bytes
    totalBytes += n * sizeof(double);
    // 5. Calcule e imprima a média com 2 casas decimais
    mediaResultado = media / n;
    // 6. Encontre e imprima o maior valor com 2 casas decimais
    printf("Memory allocated: %zu bytes\n",totalBytes);
    printf("Average: %.2f\n",mediaResultado);
    printf("Largest: %.2f\n",maior);
    return 0;
}