int main() {
    double myDouble = 1.67;
    int myInt = 21;
    char myChar = 'x';

    double *doublePtr = &myDouble;
    int *intPtr = &myInt;
    char *charPtr = &myChar;

    printf("Double: %p, %f, %d\n", &myDouble, myDouble, sizeof(myDouble));
    printf("Int: %p, %d, %d\n", &myInt, myInt, sizeof(myInt));
    printf("Char: %p, %c, %d\n", &myChar, myChar, sizeof(myChar));
}