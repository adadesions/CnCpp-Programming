#include "stdio.h"

int main() {
    printf("How old are you?\n");
    int age = 0;
    scanf("%d", &age);

    printf("You are %d years old\n", age);
    printf("Address %p\n", &age);

    return 0;
}
