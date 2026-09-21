#include <stdio.h>

// Escreva sua função modifyArray aqui
void modifyArray(int arr[] , int n , int k){
    for(int i = 0 ; i < n ; i++){
        arr[i] += k;
        printf("%d ", arr[i]);
    }
}



int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    // Chame a função modifyArray e imprima o resultado
    modifyArray(arr , n, k);
    return 0;
}