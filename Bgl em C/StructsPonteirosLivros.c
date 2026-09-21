#include <stdio.h>
#include <string.h>

// TODO: Defina a struct Book aqui
struct Book{
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
};



int main() {
    // TODO: Crie uma variável Book chamada myBook
    struct Book myBook;
    // TODO: Declare um ponteiro para Book chamado bookPtr
    struct Book *bookPtr = &myBook;
    // TODO: Atribua o endereço de myBook a bookPtr
    
    // Lê os valores de entrada
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
    float precoPagina;

    scanf("%d", &id);
    scanf("%s", title);
    scanf("%s", author);
    scanf("%f", &price);
    scanf("%d", &pages);
    
    // TODO: Atribua os valores de entrada aos membros da struct usando o operador seta
    bookPtr->id = id;
    strcpy(bookPtr->title, title);
    strcpy(bookPtr->author, author);
    bookPtr->price = price;
    bookPtr->pages = pages;
    // TODO: Aplique 10% de desconto ao price usando o operador seta
    bookPtr->price = bookPtr->price * 0.9;
    // TODO: Adicione 50 páginas de bônus usando o operador seta
    bookPtr->pages += 50;
    // TODO: Imprima as informações do livro usando o operador seta
    printf("Book Information:\n");
    printf("ID: %d\n",bookPtr->id);
    printf("Title: %s\n",bookPtr->title);
    printf("Author: %s\n",bookPtr->author);
    printf("Price: %.2f\n",bookPtr->price);
    printf("Pages: %d\n",bookPtr->pages);
    // TODO: Calcule e imprima o preço por página usando o operador seta
    precoPagina = bookPtr->price / bookPtr->pages ;
    printf("Price per page: %.2f",precoPagina);
    
    return 0;
}