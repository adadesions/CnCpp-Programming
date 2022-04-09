// Write a C program to input number of days from user and convert it to years, weeks and days.

// Input: 373
// Output: 373 days = 1 years, 1 weeks and 1 days
// Solution => 
// years = days / 365 
// weeks = (days - years*365) / 7
// remain_days = days - (weeks*7 + years*365)

#include "stdio.h"

int main() {
    int days, years, weeks, rdays;
    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    rdays = days - (weeks*7 + years*365);
    printf("%d years %d weeks %d days\n", years, weeks, rdays);
}