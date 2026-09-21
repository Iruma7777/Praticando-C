#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    int valido_p;
    int valido_a;
    char* erro;
    int caso;
    char* peso;
    weight_result = scanf("%f", &weight);
    height_result = scanf("%f", &height);
    
    // Validar entrada
    if(weight_result != 1 || height_result != 1){
        printf("Invalid input type!");
        return 0;
    }
    valido_a = (height >= 1.0 && height <= 2.5);
    valido_p = (weight >= 30 && weight <= 300);
    if(valido_a == 0 || valido_p == 0){
        erro = (valido_a == 0) ? erro = "Height out of range!" : (valido_p == 0) ? "Weight out of range!" : "tudo errado";
        printf("%s", erro);
    }
    else if(valido_a == 1 && valido_p == 1){
        bmi = weight / (height * height);
        if(bmi >=30){
            caso = 1;
            peso = "Obese";         
        }
        else if(bmi >= 25.0 && bmi <= 29.9){
            caso = 2;
            peso = "Overweight";         
        }
        else if(bmi >= 18.5 && bmi <= 24.9){
            caso = 3;
            peso = "Normal weight";            
        }
        else if(bmi < 18.5){
            caso = 4;
            peso = "Underweight";
        }
    }
    switch(caso){

    case 1: printf("BMI: %.1f\nCategory: %s",bmi,peso);
    break;

    case 2: printf("BMI: %.1f\nCategory: %s",bmi,peso);
    break;

    case 3: printf("BMI: %.1f\nCategory: %s",bmi,peso);
    break;

    case 4: printf("BMI: %.1f\nCategory: %s",bmi,peso);
    break;
    }

    // Calcular IMC
    
    // Determinar categoria de peso
    
    // Imprimir resultados
    
    return 0;
}