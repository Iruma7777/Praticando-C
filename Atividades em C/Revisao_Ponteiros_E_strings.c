#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Escreva sua função concatenateStrings aqui
char* concatenateStrings(char* str1,char* str2){
    size_t tamanho = strlen(str1) + strlen(str2) + 1; 
    char* resultado = malloc(tamanho);
    if(resultado == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    strcpy(resultado,str1);
    strcat(resultado,str2);
    return resultado;
}

// TODO: Escreva sua função processText aqui
char* processText(char* word1,char* word2,char* separator){
    char* intermediario = concatenateStrings(word1, separator);
    char* resultadoFinal = concatenateStrings(intermediario,word2);
    free(intermediario);
    return resultadoFinal;
}


int main() {
    // Ler entrada
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
    
    // TODO: Escreva seu código abaixo
    char* resultado = processText(firstWord, secondWord, connector);
    printf("Result: %s\n", resultado);
    printf("Length: %zu\n", strlen(resultado));
    free(resultado);

    return 0;
}