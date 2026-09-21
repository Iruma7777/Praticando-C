#include <stdio.h>
#include <string.h>

// TODO: Defina a struct Rectangle aqui
struct Rectangle{
    int width;
    int height;
    char color[15];
};
// TODO: Escreva a função displayRectangle aqui
void displayRectangle(struct Rectangle p){
    int area = 0;
    area = p.width * p.height;
    printf("Rectangle Details:\n");
    printf("Width: %d\n",p.width);
    printf("Height: %d\n",p.height);
    printf("Color: %s\n",p.color);
    printf("Area: %d\n",area);
}

// TODO: Escreva a função modifyRectangle aqui
void modifyRectangle(struct Rectangle p){
    strcpy(p.color,"Modified");
    p.height = p.height * 2;
    p.width = p.width * 2;
    int area = 0;
    area = p.width * p.height;
    printf("Rectangle Details:\n");
    printf("Width: %d\n",p.width);
    printf("Height: %d\n",p.height);
    printf("Color: %s\n",p.color);
    printf("Area: %d\n",area);
    
}


int main() {
    // Ler entrada
    int width, height;
    char color[15];
    
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%s", color);
    
    // TODO: Criar a variável Rectangle e atribuir os valores de entrada
    struct Rectangle rect = {width,height};
    strcpy(rect.color,color);
    // TODO: Imprimir "Original rectangle:" e chamar displayRectangle
    printf("Original rectangle:\n");
    displayRectangle(rect);
    // TODO: Chamar modifyRectangle
    printf("Inside modifyRectangle function:\n");
    modifyRectangle(rect);
    // TODO: Imprimir "After modifyRectangle call:" e chamar displayRectangle novamente
    printf("After modifyRectangle call:\n");
    displayRectangle(rect);
    return 0;
}