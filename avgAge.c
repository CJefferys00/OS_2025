#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int avg;

    for (int i = 0; i <= 8; i++) {
        avg += ages[i];
        avg /= 8;
    }
    printf("%d\n", avg);
}