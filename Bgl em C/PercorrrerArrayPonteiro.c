#include <stdio.h>

int main() {
    // TODO: Escreva seu código aqui

    // Declare e inicialize o array 'data' com os valores {12, 24, 36, 48, 60}
    int data[5] = {12,24,36,48,60};
    // Declare o ponteiro 'ptr' e inicialize-o para apontar para o primeiro elemento
    int *ptr = data;
    // Use um loop for com aritmética de ponteiros para percorrer o array
    for(int i = 0; i < 5; i++){
        printf("Value: %d, ",*ptr);
        printf("Address: %p\n",ptr);
        ptr++;
    }
    // Imprima cada valor e endereço, depois incremente o ponteiro
    
    // Redefina o ponteiro e use aritmética de ponteiros para acessar elementos específicos
    ptr = data;
    printf("Third element: %d\n",*(ptr + 2));
    printf("Last element: %d\n",*(ptr + 4));
 
 
 
 
 
 
    return 0;
}