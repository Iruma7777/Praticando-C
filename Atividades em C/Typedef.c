#include <stdio.h>

// TODO: Crie aliases typedef aqui
typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main() {
    // TODO: Declare variáveis usando os aliases typedef
    SensorID sensor;
    Temperature currentTemp;
    Temperature threshold;
    Status alertStatus;
    // Ler valores de entrada
    scanf("%d", &sensor);
    scanf("%f", &currentTemp);
    scanf("%f", &threshold);
    scanf("%d", &alertStatus);
    
    // TODO: Escreva seu código abaixo para imprimir informações do sensor e realizar a análise
    printf("Sensor ID: %d\n",sensor);
    printf("Current Temperature: %.1f\n",currentTemp);
    printf("Threshold: %.1f\n",threshold);
    printf("Alert Status: %d\n",alertStatus);
 
    Temperature difference = currentTemp -threshold;
    printf("Temperature Difference: %.1f\n",difference);

    if(currentTemp < 0.0){
        printf("Category: Freezing\n");
    }
    else if(currentTemp >= 0.0 && currentTemp <= 25.0){
        printf("Category: Normal\n");
    }
    else if(currentTemp > 25.0){
        printf("Category: Hot\n");
    }
    if(currentTemp > threshold && alertStatus == 1){
        printf("Alert: Temperature exceeded threshold!\n");
    }
    else{
        printf("Alert: No alert triggered\n");
    }
    return 0;
}