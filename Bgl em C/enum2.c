#include <stdio.h>
#include <string.h>

int contPending = 0;
int contRunning = 0;
int contComplete = 0;
int contCancell = 0;
// TODO: Defina o enum TaskStatus aqui
enum TaskStatus{
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED,
};

void imprirTask(enum TaskStatus X){
    switch(X) {
        case PENDING:
            contPending++;
            break;
        case IN_PROGRESS:
            contRunning++;
            break;
        case COMPLETED:
            contComplete++;
            break;
        case CANCELLED:
            contCancell++;
            break;
        default:
            printf("Erro");
            break;
    }
}

int main() {
    // Lê a entrada para três status de tarefa
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    // TODO: Declare três variáveis enum TaskStatus (task1, task2, task3)
    enum TaskStatus task1 = status1;
    enum TaskStatus task2 = status2;
    enum TaskStatus task3 = status3;        
    // TODO: Atribua valores ao enum com base na entrada
 
    // TODO: Imprima os status das tarefas
    printf("Task 1 status: %d\n",task1);
    printf("Task 2 status: %d\n",task2);
    printf("Task 3 status: %d\n",task3);
    imprirTask(task1);
    imprirTask(task2);
    imprirTask(task3);
    // TODO: Conte as tarefas em cada categoria
    printf("Pending tasks: %d\n",contPending);
    printf("In progress tasks: %d\n",contRunning);
    printf("Completed tasks: %d\n",contComplete);
    printf("Cancelled tasks: %d\n",contCancell);
    // TODO: Calcule e imprima a contagem de tarefas ativas
    int tudoJunto = 0;
    tudoJunto += contPending;
    tudoJunto += contRunning;
    printf("Active tasks: %d\n",tudoJunto);
    return 0;
}