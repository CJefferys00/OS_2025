#include <stdio.h>
#include <string.h>

int main() {
    FILE* filePtr;
    char dataToBeWritten[50] = "GeeksforGeeks-A Computer Science Portal for Geeks";
    
    filePtr = fopen("GfgTest.c", "w");

    if (filePtr == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {
        printf("The file is now opened.\n");        
    }

    if (strlen(dataToBeWritten) > 0) {
        fputs(dataToBeWritten, filePtr);
        /* can also be written as the following:
        1.) fwrite(dataToBeWritten, sizeof(char), strlen(dataToBeWritten), filePtr);
        2.) fprintf(filePtr, "%s", dataToBeWritten);
        */
    }

    fclose(filePtr);

    return 0;
}