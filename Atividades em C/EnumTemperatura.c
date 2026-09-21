#include <stdio.h>

// TODO: Defina o enum WeatherCondition aqui
enum WeatherCondition {
    SUNNY,
    CLOUDY,
    RAINY,
    STORMY,
    SNOWY,
};

// TODO: Implemente a função getWeatherAdvice aqui
void getWeatherAdvice (enum WeatherCondition weather){
    switch(weather){
        case SUNNY:
        printf("Perfect day for outdoor activities!\n");
        break;
        case CLOUDY:
        printf("Good day for a walk, no sun protection needed.\n");
        break;
        case RAINY:
        printf("Don't forget your umbrella!\n");
        break;
        case STORMY:
        printf("Stay indoors and avoid travel.\n");
        break;
        case SNOWY:
        printf("Drive carefully and dress warmly.\n");
        break;
    }
}


// TODO: Implemente a função getActivitySuggestion aqui
void getActivitySuggestion(enum WeatherCondition weather){
    switch(weather){
        case SUNNY:
        printf("Suggested activity: Beach or hiking\n");
        break;
        case CLOUDY:
        printf("Suggested activity: Photography or gardening\n");
        break;
        case RAINY:
        printf("Suggested activity: Reading or indoor games\n");
        break;
        case STORMY:
        printf("Suggested activity: Movie marathon\n");
        break;
        case SNOWY:
        printf("Suggested activity: Skiing or hot cocoa\n");
        break;

    }
}


int main() {
    // Ler entrada
    int weatherInput;
    scanf("%d", &weatherInput);
    
    // TODO: Declare a variável currentWeather e atribua o valor do enum com base na entrada
    enum WeatherCondition currentWeather = weatherInput;
    // TODO: Imprima a condição climática atual no formato "Current weather: [numeric_value]"
    printf("Current weather: %d\n",currentWeather);
    // TODO: Chame a função getWeatherAdvice
    getWeatherAdvice(currentWeather);
    // TODO: Chame a função getActivitySuggestion
    getActivitySuggestion(currentWeather);
    
    return 0;
}