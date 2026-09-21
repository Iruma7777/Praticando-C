#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    // Escreva seu código abaixo
    
    char* result ;

    if(number == 0){
        result = "zero";
    }
    else if(number != 0) {
        (number > 0) ? (result = "positive") : (result = "negative");
        }
        // funcional, mas n o mais conciso porem 100% autoral
    
    printf("The number is %s\n", result);
    return 0;
}

/*
EXEMPLO DE ANINHAMENTO PERFEITO
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    char* result = (number == 0) ? "zero" : (number > 0) ? "positive" : "negative";
    
    printf("The number is %s\n", result);
    return 0;
}
*/
