// Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.

// INPUT: float celsius
// OUTPUT: float fahrenheit
// Formula: fahrenheit = (cel/5)*9 + 32

#include "stdio.h"

int main() {
    float c, f;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);

    f = (9 * c/5) + 32;
    printf("%.2f C convert to %.2f F\n", c, f);

    return 0;
}