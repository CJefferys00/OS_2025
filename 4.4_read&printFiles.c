#include <stdio.h>
#include <string.h>

int main() {
    FILE* filePtr;
    char dataToBeRead[50];

    filePtr = fopen("GfgTest.c", "r");

    if (filePtr == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {
        printf("The file is now opened.\n");
    }

    while (fgets(dataToBeRead, sizeof(dataToBeRead), filePtr) != NULL) {
        printf("%s\n", dataToBeRead);
    }

    /*
    this can also be done like this:
    1.) while ((dataToBeRead = fgetsc(filePtr)) != EOF) {
            putchr(dataToBeRead);
    }

    2.) while ((size_t bytesRead = fread(dataToBeRead, sizeof(char), sizeof(dataToBeRead) - 1, filePtr)) > 0) {
            dataToBeRead[bytesRead] = '\0';
            printf("%s", dataToBeRead);
    }
    */

    fclose(filePtr);
    return 0;
}