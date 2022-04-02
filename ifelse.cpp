#include "stdio.h"

int main()
{
    // Ask Name
    char name[128] = "";
    char strAns[500] = "";
    int age = 0;
    printf("AI: What's your name ?\n");
    printf("Annonymous: ");
    scanf("%s", &name);

    // Greeting
    printf("AI: Hello, %s. How are you?\n", name);
    printf("%s: ", name);
    scanf("%s", &strAns);

    // Ask for Age
    printf("AI: How old are you?\n");
    printf("%s: ", name);
    scanf("%d", &age);

    if (age < 30)
    {
        printf("AI: %d, You're too young!\n", age);
    }
    else if (age == 30)
    {
        printf("AI: %d, Life begin here!!\n", age);
    }
    else
    {
        printf("AI: %d, You're so cool!!!!\n", age);
    }

    return 0;
}