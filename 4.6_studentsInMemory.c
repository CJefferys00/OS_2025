#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStudents;
    int *scores;
    FILE *filePtr;

    printf("Number of students: ");
    if (scanf("%d", &numStudents) != 1 || numStudents <= 0) {
        printf("Invalid number of students");
    }
    scores = (int *)malloc(numStudents * sizeof(int));

    if (scores == NULL) {
        printf("Failed to allocate\n");
    }

    printf("Scores: \n");
    for (int i = 0; i < numStudents; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    filePtr = fopen("scores.txt", "w");

    if (filePtr == NULL) {
        printf("File failed to open\n");
        free(scores);
    }

    for (int i = numStudents - 1; i >= 0; i--) {
        fprintf(filePtr, "%d\n", scores[i]);
    }
    free(scores);

    fclose(filePtr);
    return 0;
}