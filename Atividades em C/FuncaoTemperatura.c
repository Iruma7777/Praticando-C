#include <stdio.h>

// TODO: Crie a função analyzeTemperatures aqui

void analyzeTemperatures(int arr[], int size){

    float media = 0;
    int maiorTemp = arr[0]; 
    int acimaDvinteCinco = 0;

    for(int i = 0; i < size; i++){
        media += arr[i];        
    }
    media = media / size ;
     printf("Average temperature: %.1f\n",media);

    for(int i = 0; i < size; i++){
        if(maiorTemp < arr[i]){
            maiorTemp = arr[i];
        }
    }   
    printf("Highest temperature: %d\n",maiorTemp);

    for(int i = 0; i < size; i++){
        if(arr[i] > 25){
            acimaDvinteCinco++;
        }
    }
    printf("Days above 25 degrees: %d\n",acimaDvinteCinco);




}

int main() {
    // Ler o número de leituras de temperatura
    int n;
    scanf("%d", &n);
    
    // Declarar array para armazenar as temperaturas
    int temperatures[n];
    
    // Ler os valores de temperatura
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }
    
    // TODO: Chame a função analyzeTemperatures aqui

    analyzeTemperatures(temperatures,n);






    return 0;
}