#include <stdio.h>

int main() {
    int numItems = 50;
    float price = 9.99;
    float total = numItems * price;

    printf("Number of Items: %d\n", numItems);
    printf("Price: $%.2f\n", price);
    printf("Total: %.2f\n", total);
    return 0;
}