#include <stdio.h>
#include <string.h>

// TODO: Defina a struct Car aqui

    struct Car{
        int year;
        char brand[20];
        int mileage;
        float price;
    };

int main() {
    // TODO: Crie uma variável Car chamada myCar
    struct Car myCar;

    // Ler valores de entrada
    int year;
    char brand[20];
    int mileage;
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%d", &mileage);
    scanf("%f", &price);
    
    // TODO: Atribua os valores de entrada aos membros da struct usando o operador ponto
    for(int i = 0; i < 5; i++){
            myCar.year = year;
            strcpy(myCar.brand, brand);
            myCar.mileage = mileage;
            myCar.price = price;
    }
    // TODO: Modifique a quilometragem (mileage) e o preço (price) conforme especificado
    myCar.mileage += 1000;
    myCar.price  -= 500.0;
    // TODO: Imprima os detalhes do carro usando o operador ponto
    printf("Car Details:\n");
    // Imprima Ano (Year), Marca (Brand), Quilometragem (Mileage) e Preço (Price) aqui
    printf("Year: %d\n",myCar.year);
    printf("Brand: %s\n",myCar.brand);
    printf("Mileage: %d\n",myCar.mileage);
    printf("Price: %.2f\n",myCar.price);
    return 0;
}