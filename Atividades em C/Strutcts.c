#include <stdio.h>

    struct Book {
        int id;
        char title[50];
        int pages;
        float price;
    };


int main() {
    // TODO: Defina sua struct Book aqui
  
    struct Book livro; //Isso é uma variavel struct, livro é uma varivale do tipo Book.

    int tamanhoID = sizeof(livro.id);
    int tamanhoTitle = sizeof(livro.title);
    int tamanhoPages = sizeof(livro.pages);
    int tamanhoPrice = sizeof(livro.price);
    int tamanhoTotal = sizeof(struct Book);


    // Imprime a mensagem de confirmação
    printf("Book struct defined successfully!\n");
    
    // TODO: Imprima o tamanho da struct Book e de seus membros
    printf("Size of Book struct: %d bytes\n",tamanhoTotal);
    printf("Size of id: %d bytes\n", tamanhoID);
    printf("Size of title: %d bytes\n", tamanhoTitle);
    printf("Size of pages: %d bytes\n", tamanhoPages);
    printf("Size of price: %d bytes\n", tamanhoPrice);
    
    return 0;
}