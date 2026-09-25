#include <stdio.h>
#include <string.h>

// TODO: Defina sua struct e typedef aqui
typedef struct {
  int id;
  char title[50];
  float price;
  int quantity;
} Book;

int main() {
  // TODO: Declare suas variáveis Book aqui
  Book book1;
  Book book2;
  // Ler a entrada para o primeiro livro
  int id1, quantity1;
  char title1[50];
  float price1;

  scanf("%d", &id1);
  scanf("%s", title1);
  scanf("%f", &price1);
  scanf("%d", &quantity1);

  // TODO: Atribua valores aos membros de book1
  book1.id = id1;
  strcpy(book1.title, title1);
  book1.price = price1;
  book1.quantity = quantity1;
  // Ler a entrada para o segundo livro
  int id2, quantity2;
  char title2[50];
  float price2;

  scanf("%d", &id2);
  scanf("%s", title2);
  scanf("%f", &price2);
  scanf("%d", &quantity2);

  // TODO: Atribua valores aos membros de book2
  book2.id = id2;
  strcpy(book2.title, title2);
  book2.price = price2;
  book2.quantity = quantity2;
  // TODO: Imprima as informações do livro, calcule os valores e compare
  printf("Book 1: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book1.id,
         book1.title, book1.price, book1.quantity);
  printf("Book 2: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book2.id,
         book2.title, book2.price, book2.quantity);

  float total1 = price1 * quantity1;
  float total2 = price2 * quantity2;

  printf("Book 1 Total Value: %.2f\n", total1);
  printf("Book 2 Total Value: %.2f\n", total2);

  printf("Combined Inventory Value: %.2f\n", total1 + total2);

  if (total1 == total2) {
    printf("Both books have equal value\n");
  } else if (total1 > total2) {
    printf("Book 1 has higher value\n");
  } else {
    printf("Book 2 has higher value\n");
  }

  return 0;
}