#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Defina a struct Employee aqui
struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};
// TODO: Implemente a função fillEmployeeData aqui
void fillEmployeeData(struct Employee *ptr){
    float bonus;
    scanf("%d",&ptr->id);
    scanf("%s",ptr->name);
    scanf("%s",ptr->department);
    scanf("%f",&ptr->salary);
    scanf("%d",&ptr->yearsOfService);
    if(ptr->yearsOfService >= 5){
        bonus = ptr->salary * 0.10; 
    }
    else{
        bonus = ptr->salary * 0.05; 
    }
    ptr->salary += bonus;
}
// TODO: Implemente a função displayEmployee aqui
void displayEmployee(struct Employee *ptr){
    printf("Employee Details:\n");
    printf("ID: %d\n",ptr->id);
    printf("Name: %s\n",ptr->name);
    printf("Department: %s\n",ptr->department);
    printf("Salary: %.2f\n",ptr->salary);
    printf("Years of Service: %d\n",ptr->yearsOfService);
}
// TODO: Implemente a função promoteEmployee aqui
void promoteEmployee(struct Employee *ptr){
    float aumento;
    ptr->yearsOfService++;
    aumento = ptr->salary * 0.15;
    ptr->salary += aumento;
    printf("Employee promoted successfully!\n");
}

int main() {
    // TODO: Declare empPtr e aloque memória
    struct Employee *empPtr = malloc(sizeof(struct Employee));
    // TODO: Verifique se a alocação de memória foi bem-sucedida
    if(empPtr == NULL){
        printf("Memory allocation failed\n");
        return -1;
    }
    else{
        printf("Memory allocated successfully\n");
    }
    // TODO: Preencha os dados do funcionário, exiba os dados iniciais, promova e exiba após a promoção
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
    // TODO: Libere a memória e imprima uma mensagem de sucesso
    free(empPtr);
    printf("Memory freed successfully\n");
 
    return 0;
}