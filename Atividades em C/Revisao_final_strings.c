#include <stdio.h>
#include <string.h>

// TODO: Escreva sua função extractWord aqui
int extractWord(char* frase, int startIndex, char* palavra){
    int i = startIndex;   
    int j = 0;             

    while(1){
        if(frase[i] == ' ' || frase[i] == '\0'){
            palavra[j] = '\0';   
            break; 
        }                
        else{
            palavra[j] = frase[i]; 
            i++;
            j++;
        }
    }
    return i; 
}


// TODO: Escreva sua função countWordOccurrences aqui
int countWordOccurrences(char* sentence, char* targetWord){
    int qnt = 0;
    char temp[50];
    int j = 0;

    for(int i = 0; i <= strlen(sentence); i++){
        if(sentence[i] == ' ' || sentence[i] == '\0'){
            temp[j] = '\0';

            if(j > 0){
                if(strcmp(temp, targetWord) == 0){
                    qnt++;
                }
            }

            j = 0;
        }
        else{
            temp[j] = sentence[i];
            j++;
        }
    }

    return qnt;
}

// TODO: Escreva sua função analyzeText aqui
int analyzeText(char* frase){
    int totalPalavras = 0;
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] != ' ' && (i == 0 || frase[i - 1] == ' ' )){
            totalPalavras++;
        }
    }
    return totalPalavras;
}



int main() {
    char inputSentence[200];
    char searchWord[50];
    
    // Ler a frase de entrada
    fgets(inputSentence, sizeof(inputSentence), stdin);
    // Remover o caractere de nova linha, se presente
    inputSentence[strcspn(inputSentence, "\n")] = '\0';
    
    // Ler a palavra de busca
    scanf("%s", searchWord);
    
    // TODO: Escreva seu código abaixo
    // Chamar a função analyzeText e armazenar a contagem total de palavras
    printf("Total words: %d\n",(analyzeText(inputSentence)));
    // Chamar a função countWordOccurrences e armazenar as ocorrências
    printf("Occurrences of '%s': %d\n",searchWord ,(countWordOccurrences(inputSentence,searchWord)));
    // Calcular a porcentagem de frequência
    int ocorrencias = countWordOccurrences(inputSentence, searchWord);
    int total = analyzeText(inputSentence);

    float frequencia = ((float)ocorrencias / total) * 100;

    printf("Frequency: %.1f%%\n", frequencia);
    // Determinar a categoria de frequência
    if(frequencia == 0.0){
        printf("Category: Not found\n");
    }
    else if(frequencia > 0.0 && frequencia < 20.0){
        printf("Category: Rare\n");
    }
    else if(frequencia >= 20.0 && frequencia <= 50.0){
        printf("Category: Common\n");
    }
    else if(frequencia > 50.0){
        printf("Category: Frequent\n");
    }
    // Exibir os resultados no formato exigido
    // printf("Total words: %d\n", totalWords);
    // printf("Occurrences of '%s': %d\n", searchWord, occurrences);
    // printf("Frequency: %.1f%%\n", frequency);
    // printf("Category: %s\n", category);
    
    return 0;
}