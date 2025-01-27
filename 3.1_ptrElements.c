#include <stdio.h>

int main() {
    int myNums[] = {25, 50, 75, 100};
    printf("%d\n", *(myNums + 1));

    return 0;
}