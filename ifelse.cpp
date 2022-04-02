#include "stdio.h"

int main() {
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

    


    return 0;
}