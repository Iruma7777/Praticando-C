#include <stdio.h>

// TODO: Defina seu enum ShapeType e typedef aqui
typedef enum ShapeType{
    CIRCLE,
    RECTANGLE,
    TRIANGLE,
}Shape;
// TODO: Implemente a função calculateArea aqui
float calculateArea(Shape shape, float dimension1, float dimension2){
    float area;
    switch(shape){
        case CIRCLE:
        area = 3.14159 * dimension1 * dimension1;
        return area;
        break;
        case RECTANGLE:
        area = dimension1 * dimension2;
        return area;
        break;
        case TRIANGLE:
        area = 0.5 * dimension1 * dimension2;
        return area;
        break;
    }        
    return 1;
}

// TODO: Implemente a função printShapeInfo aqui
void printShapeInfo(Shape shape){
    switch(shape){
    case CIRCLE:
    printf("Shape: Circle\n");
    break;
    case RECTANGLE:
    printf("Shape: Rectangle\n");
    break;
    case TRIANGLE:
    printf("Shape: Triangle\n");
    break;
    }
}


int main() {
    // Ler entrada
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    // TODO: Escreva seu código abaixo
    // Declarar a variável selectedShape e atribuir com base em shapeChoice
    Shape selectedShape = shapeChoice;
    // Chamar a função printShapeInfo
    printShapeInfo(selectedShape);
    // Imprimir dimensões
    printf("Dimensions: %.1f %.1f\n",dim1,dim2);
    // Calcular e imprimir a área
    printf("Area: %.2f\n",calculateArea(selectedShape,dim1,dim2));
    // Determinar e imprimir a categoria
    if(calculateArea(selectedShape,dim1,dim2) < 10.0){
        printf("Category: Small\n");
    }
    else if(calculateArea(selectedShape,dim1,dim2) >= 10.0 && calculateArea(selectedShape,dim1,dim2) <= 50.0){
        printf("Category: Medium\n");
    }
    else if(calculateArea(selectedShape,dim1,dim2) > 50.0){
        printf("Category: Large\n");
    }
    return 0;
}