#include <stdio.h>
#include <string.h>

// TODO: Defina a struct Product aqui

struct Product{
    int id;
    char name[25];
    float price;
    int quantity;
};

void printarBgl(struct Product var){
    printf("Original Product Info:\n");
    printf("ID: %d\n",var.id);
    printf("Name: %s\n",var.name);
    printf("Price: %.2f\n",var.price);
    printf("Quantity: %d\n",var.quantity);
}

void printarPonteiro(struct Product *var){
    printf("Product Info via Pointer:\n");
    printf("ID: %d\n",(*var).id);
    printf("Name: %s\n",(*var).name);
    printf("Price: %.2f\n",(*var).price);
    printf("Quantity: %d\n",(*var).quantity);
}




int main() {
    // TODO: Escreva seu código aqui

    // 1. Crie e inicialize a variável Product 'item'
    struct Product item = {501,"Laptop",899.99,15};
    // 2. Declare um ponteiro para Product chamado 'itemPtr'
    struct Product *itemPtr = &item;
    // 3. Atribua o endereço de 'item' para 'itemPtr'
    
    // 4. Imprima as informações originais do produto usando o operador ponto
    printarBgl(item);
    // 5. Imprima as informações do produto via ponteiro usando (*itemPtr).member
    printarPonteiro(itemPtr);
    // 6. Imprima e verifique os endereços
    void* enderecoItem = &item;
    void* enderecoPtr = itemPtr;

    printf("Address of item: %p\n",enderecoItem);
    printf("Value of itemPtr: %p\n",enderecoPtr);

    if(enderecoItem == enderecoPtr){
        printf("Address verification: Match\n");
    }
    else{
        printf("Address verification: No Match\n");
    }

    return 0;
}