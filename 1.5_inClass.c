#include <stdio.h>

int main() {
    int temp;

    printf("Enter temp in fahrenheit: ");
    scanf("%d", temp);

    if (temp > 70 && temp < 85) {
        printf("%d\n", temp > 70 && temp < 85);
    }
    else {
        printf("0");
    }
    
}