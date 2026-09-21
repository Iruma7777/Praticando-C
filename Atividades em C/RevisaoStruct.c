#include <stdio.h>
#include <string.h>
#include <math.h>

// TODO: Defina a struct Student aqui

struct Student{
    int id;
    float grade;
};

int main() {
    // TODO: Crie uma variável Student chamada student1
    char status[30]  = {0};
    float notaBonus = 0.0;
    float notaBPositiva = 0.0;

    // Ler entrada
    int id;
    float grade;
    scanf("%d", &id);
    scanf("%f", &grade);
    
    // TODO: Armazene os valores de entrada nos membros da struct
    if(grade >= 100.0){
        grade = 100.0;   
    }
    
    notaBonus = grade;
    notaBonus += 5.0;
    notaBPositiva = fabs(notaBonus);

    if(notaBPositiva > 100.0){
        notaBPositiva = 100.0;
    }

    if(grade <= 0.0){
        grade = 0.0;
    }
    // TODO: Implemente a validação da nota e o cálculo do bônus
    struct Student student1 = {id,grade};
    // TODO: Determine o status da nota
    
    // Exibir os resultados
    printf("Student Information:\n");
    printf("ID: %d\n",student1.id /* TODO: imprimir o ID do estudante */);
    printf("Original Grade: %.1f\n",student1.grade /* TODO: imprimir a nota original */);
    printf("Bonus Grade: %.1f\n",notaBPositiva /* TODO: imprimir a nota com bônus */);
    
    if(student1.grade >= 90.0){
        strcpy(status,"Excellent");
    }
    if(student1.grade >= 80.0 && student1.grade < 90.0){
        strcpy(status,"Good");
    }
    if(student1.grade >= 70.0 && student1.grade < 80.0){
        strcpy(status,"Average");
    }
    if(student1.grade < 70.0){
        strcpy(status,"Needs Improvement");
    }
    
    
    printf("Grade Status: %s\n",status /* TODO: imprimir o status da nota */);
    
    return 0;
}