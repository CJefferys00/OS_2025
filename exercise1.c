#include <stdio.h>

int main() {
    int temp;

    printf("Enter temp: ");
    scanf("%d", temp);
    printf("%d\n", temp > 70 && temp < 85);
}