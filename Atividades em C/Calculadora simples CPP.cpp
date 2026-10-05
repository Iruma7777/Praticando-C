#include <iostream>
using namespace std;

void calculate(int a, int b, char op) {
    // Escreva o código aqui
    int result = 0;
    if(op == '+'){
        result = a + b;
    }
    else if(op == '-'){
        result = a - b;
    }
    else if(op == '*'){
        result = a * b;
    }
    else if(op == '/'){
        result = a / b;
    }
    std::cout << a << " " << op << " " << b << " " << '=' << " " << result << std::endl;
}

int main() {
    int a, b;
    char op;
    
    std::cin >> a >> b >> op;
    
    // Chame a função com a, b e op como argumentos
    calculate(a, b, op);
    
    return 0;
}