#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";
    int tamanho1 = 0;
    int tamanho2 = 0;
    char primeiraParte[100];
    char segundaParte[100];
    char vazio[100] = " ";
    char possivelMaior[100];
    int possivelAtual = 0;
    int possivelProximo = 0;
    // TODO: Escreva seu código aqui
    for(int i = 0; i < n;i++){
        scanf("%s",word1);
        scanf("%s",word2);
    	tamanho1 = strlen(word1);
        tamanho2 = strlen(word2);
        int igualdade = strcmp(word1 , word2);
        printf("Word 1: %s (Length: %d)\n",word1,tamanho1);
        printf("Word 2: %s (Length: %d)\n",word2,tamanho2);
        if(igualdade == 0){
            printf("Comparison: identical\n");
        }
        else{
            printf("Comparison: different\n");
        }
        strcat(word1, vazio);
        strcat(word1, word2);
        printf("Combined: %s\n",word1);
        possivelProximo = strlen(word1);
        if(possivelAtual < possivelProximo){
            strcpy(longest_combined,word1);
            possivelAtual = possivelProximo;
        }
        
    }
    // Processe cada par de palavras e encontre a string combinada mais longa
    printf("Longest combined string: %s\n", longest_combined);

    return 0;
}