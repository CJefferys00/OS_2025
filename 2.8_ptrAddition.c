#include <stdio.h>

int main() {
    int x, y, total;
    int *ptr1, *ptr2;

    printf("Enter number: ");
    scanf("%d", &x);

    printf("Enter another number: ");
    scanf("%d", &y);

    ptr1 = &x;
    ptr2 = &y;
    total = *ptr1 + *ptr2;

    printf("The total of %d and %d is %d\n", *ptr1, *ptr2, total);

    return 0;
}