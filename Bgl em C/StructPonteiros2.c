#include <stdio.h>
#include <string.h>

// TODO: Defina a struct BankAccount aqui
struct BankAccount{
    int accountNumber;
    char ownerName[30];
    float balance;
    int transactionCount;
};
// TODO: Escreva a função depositMoney aqui
void depositMoney(struct BankAccount *ptr, float d){
    ptr->balance += d;
    ptr->transactionCount += 1;
    printf("Deposit successful. New balance: %.2f\n",ptr->balance);
}
// TODO: Escreva a função withdrawMoney aqui
void withdrawMoney(struct BankAccount *ptr, float d){
    if(d > ptr->balance){
        printf("Insufficient funds. Current balance: %.2f\n",ptr->balance);
    }
    else{
        ptr->balance -= d;
        ptr->transactionCount += 1;
        printf("Withdrawal successful. New balance: %.2f\n",ptr->balance);
    }
}
// TODO: Escreva a função displayAccount aqui
void displayAccount(struct BankAccount *ptr){
    printf("Account Information:\n");
    printf("Account Number: %d\n",ptr->accountNumber);
    printf("Owner: %s\n",ptr->ownerName);
    printf("Balance: %.2f\n",ptr->balance);
    printf("Transactions: %d\n",ptr->transactionCount);
}


int main() {
    // Ler entrada
    int accountNum;
    char ownerName[30];
    float initialBalance;
    float depositAmount;
    float withdrawAmount;
    
    scanf("%d", &accountNum);
    scanf("%s", ownerName);
    scanf("%f", &initialBalance);
    scanf("%f", &depositAmount);
    scanf("%f", &withdrawAmount);
    
    // TODO: Criar a variável BankAccount e inicializá-la
    struct BankAccount account = {accountNum};
    strcpy(account.ownerName,ownerName);
    account.balance = initialBalance;
    
    // TODO: Chamar displayAccount para mostrar o estado inicial
    displayAccount(&account);
    // TODO: Chamar depositMoney com o valor do depósito
    depositMoney(&account,depositAmount);
    // TODO: Chamar withdrawMoney com o valor do saque
    withdrawMoney(&account,withdrawAmount);
    // TODO: Chamar displayAccount para mostrar o estado final
    displayAccount(&account);
    return 0;
}