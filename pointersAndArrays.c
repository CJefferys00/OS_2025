#include <stdio.h>

int main() {
    int myNums[] = {25, 50, 75, 100};

    // printf("%p\n", myNums);

    // printf("%p\n", &myNums[0]);

    // the above prints the same both times bc the mem address of an array is stored in the first element

    for (int i = 0; i < sizeof(myNums) / sizeof(myNums[0]); i++) {
        printf("%d\n", *(myNums + i));
    }
    
}