#include <stdio.h>

int main() {
    int first, second;
    
    // Obter entrada do usuário
    scanf("%d", &first);
    scanf("%d", &second);
    
    // Calcular e exibir resultados
    int remainder = first % second;
    int divi = (remainder == 0);
    int sum =  ((first + second) % 2 != 0);

    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", sum);
    printf("First is divisible by second: %d\n", divi);



    return 0;
}