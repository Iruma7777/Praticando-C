#include <iostream>
#include <vector>
#include <string>

void larp(int arr1[] ,int arr2[],int n1,int n2){
    std::string P = "";
    std::string S = "";
    for(int i = 0; i < n1;i++){
        P += std::to_string(arr1[i]);
    }
    for(int j = 0; j < n2;j++){
        S += std::to_string(arr2[j]);
    }
    bool padrao = (P.find(S) != std::string::npos);
    std::cout << std::boolalpha << padrao << std::endl;
}

int main() {
    int n1;
    int n2;

    std::cin >> n1;
    std::cin >> n2;
    std::cin.ignore();
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++) {
        int val;
        std::cin >> val;
        arr1[i] = val;
    }

    for (int i = 0; i < n2; i++) {
        int val;
        std::cin >> val;
        arr2[i] = val;
    }

    // Escreva seu código abaixo usando arr1, arr2, n1, n2
    larp(arr1,arr2,n1,n2);

    return 0;
}