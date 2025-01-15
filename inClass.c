#include <stdio.h>

int main() {
    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    char a = 65, b = 66, c = 67; // prints ascii value of each 
    char myText = 'Hello'; // prints last char of string
    float f1 = 35e3; // aka 35*10^3
    float width = 5;
    float length = 15;
    float area = width*length;
    float f2 = 3.5;
    double myD;
    int numItems = 50;
    float price = 9.99;
    float total = numItems + price;
    float sum = 5 / 2;
    int myInt = 9.99;
    
    float maxScore = 500;
    float userScore = 423;
    float percent = userScore/maxScore * 100;

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("%d, %d, %d\n", a, b, c);

    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    printf("%c\n", myText);

    printf("%.0f\n", f2); // decimal precision
    printf("%.1f\n", f2);
    printf("%.2f\n", f2); 
    printf("%.3f\n", f2);


    printf("%lu\n", sizeof(myText));
    printf("%lu\n", sizeof(myD));
    printf("%lu\n", sizeof(f1)); // prints unsigned long variables
    printf("%lu\n", sizeof(myNum));

    printf("Number of Items: %d\n", numItems);
    printf("Price: $%.2f\n", price);
    printf("Total: %.2f\n", total);

    printf("%f\n", sum); // type conversion
    printf("%d\n", myInt);

    printf("%.2f\n", percent);

    printf("Hello World\n");
    return 0;
}