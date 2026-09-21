#include <stdio.h>

int main() {
    // TODO: Escreva seu código aqui
    // Declare e inicialize seus ponteiros
    int *safe_ptr = NULL;
    char *char_ptr = NULL;
    // Verifique se os ponteiros são NULL
    if(safe_ptr == 0){
        printf("safe_ptr is NULL\n");
    }

    if(char_ptr == 0){
        printf("char_ptr is NULL\n");
    }

    // Imprima a saída necessária
    printf("safe_ptr address: %p\n", safe_ptr);
    printf("char_ptr address: %p\n", char_ptr);
    return 0;
}