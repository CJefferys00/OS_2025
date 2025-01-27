#include <stdio.h>

int main() {
    FILE *fptr;

    // open in read mode
    fptr = fopen("filename.txt", "r");

    // store contents
    char myString[100];

    // read contents and store it in the char array
    fgets(myString, 100, fptr);

    // print file contents
    printf("%s", myString);

    // close file
    fclose(fptr);
    

    // if you need to read more than one line in the file use while loop
    while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }
}