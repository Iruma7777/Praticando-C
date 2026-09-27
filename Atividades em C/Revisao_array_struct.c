#include <stdio.h>
#include <string.h>

// Struct Product
typedef struct Product {
    char name[30];
    float price;
    int stock;
} produto;

// findMostExpensive: retorna o índice do produto com maior preço
int findMostExpensive(produto items[], int size) {
    int indiceMaior = 0;
    for (int i = 1; i < size; i++) {
        if (items[i].price > items[indiceMaior].price) {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

// calculateTotalValue: soma (preço * estoque) de todos os produtos
float calculateTotalValue(produto items[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += items[i].price * items[i].stock;
    }
    return total;
}

// findLowStock: conta produtos com estoque abaixo do threshold
int findLowStock(produto items[], int size, int threshold) {
    int abaixo = 0;
    for (int i = 0; i < size; i++) {
        if (items[i].stock < threshold) {
            abaixo++;
        }
    }
    return abaixo;
}

int main() {
    produto inventory[3];

    // Lê a entrada para cada produto
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }

    // Imprime as informações de cada produto
    for (int i = 0; i < 3; i++) {
        printf("Product %d: %s - Price: %.2f, Stock: %d\n",
               i, inventory[i].name, inventory[i].price, inventory[i].stock);
    }

    // Encontra e imprime o produto mais caro
    int indiceMaisCaro = findMostExpensive(inventory, 3);
    printf("Most expensive product: %s\n", inventory[indiceMaisCaro].name);

    // Calcula e imprime o valor total do inventário
    printf("Total inventory value: %.2f\n", calculateTotalValue(inventory, 3));

    // Lê o limite de estoque baixo
    int threshold;
    scanf("%d", &threshold);

    // Encontra e imprime produtos com estoque baixo
    printf("Products with low stock: %d\n", findLowStock(inventory, 3, threshold));

    // Verifica se o produto mais caro está com bom estoque
    if (inventory[indiceMaisCaro].stock > 10) {
        printf("Most expensive product is well stocked\n");
    } else {
        printf("Most expensive product needs restocking\n");
    }

    return 0;
}