#include <iostream>
#include <cmath>

int main() {
    // Digite seu código abaixo
    int a = 9;
    double b = 2.6;
    int c = 11;
    int d = a % 2;
    int e = a % 3;
    double f = fmod(b,1.5);
    double g = fmod(b,3.9);
    int h = c % 10;
    
    // Não altere a linha abaixo
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "h = " << h << std::endl;
    return 0;
}