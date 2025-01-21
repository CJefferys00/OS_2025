#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int count = 8;
    int sum = 0;

    for (int i = 0; i < count; i++) {
        sum += ages[i];
    }
    float avg = (float)sum/count;
    printf("%.2f\n", avg);
}