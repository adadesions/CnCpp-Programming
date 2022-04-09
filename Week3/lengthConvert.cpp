// Write a C program to input length in centimeter and convert it to meter and kilometer. 

// INPUT: float centimeter
// OUTPUT: float meter, float kilometer
// Solution: centi = 10^-2 --> divided by 100

#include "stdio.h"

int main() {
    float centi = 0;
    printf("Enter a lenth in centimeter: ");
    scanf("%f", &centi);

    float meter = centi / 100;
    float kilometer = meter / 1000;

    printf("========== RESULT ==========\n");
    printf("length(meter): %.2f m\n", meter);
    printf("length(killometer): %.4f Km\n", kilometer);

    return 0;
}