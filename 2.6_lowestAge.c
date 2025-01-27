#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int count = 8;
    int lowest = ages[0];

    for (int i = 1; i < count; i++) {
       if (ages[i] < lowest) {
        lowest = ages[i];
       }
    }
    printf("%d\n", lowest);
}