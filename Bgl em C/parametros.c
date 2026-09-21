#include <stdio.h>

// Escreva sua função calculateArea aqui
int calculateArea(int length , int witdth){
return (length * witdth);

}
int main() {
    int length;
    int witdth;
    // Leia as variáveis
    scanf("%d",&length);
    scanf("%d",&witdth);
    // Chame calculateArea e imprima o resultado
    printf("Area: %d",calculateArea(length , witdth));
    return 0;
}