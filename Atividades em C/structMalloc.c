#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Defina a struct Car aqui
struct Car{
    int year;
    char brand[20];
    char model[25];
    float price;
    int mileage;
};


int main() {
    // TODO: Declare um ponteiro para a struct Car chamado carPtr
    struct Car *carPtr = malloc(sizeof(struct Car));
    // TODO: Use malloc() para alocar memória para uma struct Car
    
    // TODO: Verifique se a alocação de memória foi bem-sucedida
    if(carPtr == NULL){
        printf("Memory allocation failed\n");
        return -1;
    }
    else{
        printf("Memory allocation successful\n");
    }
    // Leia os valores de entrada
    int year, mileage;
    char brand[20], model[25];
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%s", model);
    scanf("%f", &price);
    scanf("%d", &mileage);
    
    // TODO: Atribua os valores de entrada aos membros da struct usando o operador de seta
    carPtr->year = year;
    strcpy(carPtr->brand, brand);
    strcpy(carPtr->model, model);
    carPtr->price = price;
    carPtr->mileage = mileage;
    // TODO: Calcule a idade, depreciação e valor atual
    int age = 2024 - carPtr->year;
    float depreciacao;
    float precoD;
    if(age > 10){
        depreciacao = 0.6;
    }
    else{
        depreciacao = 0.8;
    }
    precoD = carPtr->price * depreciacao;
    // TODO: Imprima as informações do carro no formato exigido
    printf("Car Information:\n");
    printf("Year: %d\n",carPtr->year);
    printf("Brand: %s\n",carPtr->brand);
    printf("Model: %s\n",carPtr->model);
    printf("Original Price: %.2f\n",carPtr->price);
    printf("Mileage: %d\n",carPtr->mileage);
    printf("Age: %d years\n",age);
    printf("Current Value: %.2f\n",precoD);
    // TODO: Libere a memória alocada e imprima uma mensagem de sucesso
    free(carPtr);
    printf("Memory freed successfully\n");

    return 0;
}