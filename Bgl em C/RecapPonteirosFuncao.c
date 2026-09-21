#include <stdio.h>

// TODO: Escreva sua função findMinMax aqui

void findMinMax(int arr[], int n ,int *min, int *max){
    for(int i = 0; i < n ;i++){
        if(arr[i] < *min){
            *min = arr[i];
        }

        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}


int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minValue, maxValue;
    minValue = arr[0];
    maxValue = arr[0];

    // TODO: Chame a função findMinMax aqui
    findMinMax(arr,n,&minValue,&maxValue);
    
    printf("Minimum: %d\n", minValue);
    printf("Maximum: %d\n", maxValue);
    
    return 0;
}