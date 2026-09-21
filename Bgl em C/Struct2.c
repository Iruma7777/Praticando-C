#include <stdio.h>

    // variaveis globais
    float soma = 0;
    float media = 0;
// TODO: Defina a struct Employee aqui

struct Employee {
    int id;
    char department[15];
    int yearsOfService;
    float salary;
};

void printarempregado (struct Employee emp){       
        printf("ID: %d\n",emp.id);
        printf("Department: %s\n",emp.department);
        printf("Years of Service: %d\n",emp.yearsOfService);
        printf("Salary: %.2f\n",emp.salary);
        soma += emp.salary;
        media += emp.yearsOfService;
    
    
}


int main() {


    // TODO: Crie três variáveis Employee usando listas de inicialização
    struct Employee emp1 = {101,"Engineering",5,75000.50};
    struct Employee emp2 = {102,"Marketing",3,65000.25};
    struct Employee emp3 = {103,"Sales",8,80000.75};
    // TODO: Imprima as informações de cada funcionário
    printf("Employee 1:\n");
    printarempregado(emp1);
    printf("Employee 2:\n");
    printarempregado(emp2);
    printf("Employee 3:\n");
    printarempregado(emp3);
    // TODO: Calcule e imprima o salário total e a média de anos de serviço
    printf("Total Salary: %.2f\n",soma);
    media = media / 3;
    printf("Average Years of Service: %.2f\n",media);
    return 0;
}