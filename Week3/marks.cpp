// Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects. 

// Input:
// Enter marks of five subjects: 95 76 85 90 89

// Output:
// Total = 435
// Average = 87
// Percentage = 87.00

// Special: INPUT must greater than zero!!!!
#include "stdio.h"

int main() {
    float comp, math, physics, eng, bio;
    float total, avg, percent;

    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f", &comp, &math, &physics, &eng, &bio);

    total = comp + math + physics + eng + bio;
    avg = total / 5;
    percent = (total/500) * 100;

    printf("Total: %.2f\nAverage: %.2f\nPercentage: %.2f\n", total, avg, percent);

    return 0;
}