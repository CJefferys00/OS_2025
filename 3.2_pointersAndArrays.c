#include <stdio.h>

int main() {
    int myNums[] = {25, 50, 75, 100};

    for (int i = 0; i < sizeof(myNums) / sizeof(myNums[0]); i++) {
        printf("%d\n", *(myNums + i));
    }
    
}