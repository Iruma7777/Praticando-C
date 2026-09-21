#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // TODO: Escreva seu código aqui
    char sentence[200];
    int length = 0;
    int vowel = 0;
    // 1. Imprima a mensagem de solicitação
    printf("Enter a sentence: ");
    scanf("%s", sentence);
    printf("You entered: %s\n",sentence);
    length = strlen(sentence);
    printf("Character count: %d\n",length);
    printf("Length: %d\n",length);
    for(int i = 0; i < length; i++){
        if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U'){
            vowel++;
        }
    }
    printf("Vowel count: %d\n",vowel);
    printf("Uppercase: ");
    for(int i = 0; i < length;i++){
    printf("%c", toupper(sentence[i]));
    }
    // 2. Declare um array de caracteres chamado 'sentence' com 200 elementos

    // 3. Leia a entrada usando scanf com o especificador de formato %s
   
    // 4. Imprima a palavra digitada e seu comprimento
    
    return 0;
}