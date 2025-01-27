#include <stdio.h>

int main() {
    FILE *hello;

    hello = fopen("hello.txt", "r");
    char str[100];

    while(fgets(str, 100, hello)) {
        printf("%s", str);
    }

    fclose(hello);
}