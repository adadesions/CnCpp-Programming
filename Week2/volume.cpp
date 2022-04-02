#include "stdio.h"

// Write a program in C to calculate the volume of a cylinder.

// formula: V = pi * r^2 * h

int main() {
    const float PI = 3.141592;
    float r = 0;
    float h = 0;

    printf("========= Volume of Cylinder =========\n");

    printf("Enter a radius: ");
    scanf("%f", &r);
    printf("Enter a height: ");
    scanf("%f", &h);

    float volume = PI * r * r * h;
    printf("Cylinder volume: %.2f m^3\n", volume);
    printf("Where, r = %.2f m, h = %.2f m\n", r, h);

    return 0; 
}