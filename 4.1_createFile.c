#include <stdio.h>

int main() {
    FILE *hello;

    hello = fopen("hello.txt", "w");
    fprintf(hello, "Hello \nHow are you?\nMy name is Cameron\nWhat is your name?\n");
    fclose(hello);
}