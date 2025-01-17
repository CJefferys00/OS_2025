#include <stdio.h>

int main() {
    char name[30];

    printf("%Enter name: \n");

    scanf("%s\n", name);

    printf("Hello %s\n", name);
}