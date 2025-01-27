#include <stdio.h>

int main() {
    FILE *fptr;

    // open the file in writing mode (w for writing, a for append, and r for read)
    fptr = fopen("filename.txt", "w");

    // write some text to the file
    fprintf(fptr, "Some text");

    // close file
    fclose(fptr);

    fptr = fopen("filename.txt", "a");

    fpprintf("Hello!");

    fclose(fptr); 
}