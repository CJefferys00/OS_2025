#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", num);
    
    if(num < 0) {
        printf("Your number is negative");
    }
    else if(num > 0) {
        printf("Your number is positive");
    }
    else {
        printf("Your number is 0");
    }
}