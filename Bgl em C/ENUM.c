#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

const char* lightName(enum TrafficLight light) {
    switch (light) {
        case RED:    return "RED";
        case YELLOW: return "YELLOW";
        case GREEN:  return "GREEN";
        default:     return "UNKNOWN";
    }
}

int main() {
    int input;
    scanf("%d", &input);

    enum TrafficLight currentLight = input;

    printf("Current light: %s\n", lightName(currentLight));
    printf("Numeric value: %d\n", input);

    if (input == RED)    printf("Action: Stop\n");
    if (input == YELLOW) printf("Action: Caution\n");
    if (input == GREEN)  printf("Action: Go\n");

    enum TrafficLight nextLight;
    if (currentLight == RED)    nextLight = GREEN;
    if (currentLight == YELLOW) nextLight = RED;
    if (currentLight == GREEN)  nextLight = YELLOW;

    printf("Next light: %s\n", lightName(nextLight));

    return 0;
}