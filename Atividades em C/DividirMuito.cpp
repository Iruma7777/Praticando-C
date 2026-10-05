#include <iostream>

int main() {
    // Escreva seu código abaixo
    double num;
    std::cin >> num;
    while(1){
        if(num >= 3.5){
            num = num / 2;
        }
        else{
            std::cout << num;
            break;
        }
    }
    
    return 0;
}