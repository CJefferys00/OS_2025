#include <stdio.h>
#include <math.h>

float tempConvert(float temp);
float area(float height, float width);
float circleA(float r);

int main() {
    float fNum;
    float cNum;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &fNum);
    printf("This is the temp in Celcius: %.1f\n", tempConvert(fNum));

    float width;
    float height;
    float a;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);

    printf("The area is %.2f \n", area(width, height));

    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("The circle area is: %.2f \n", circleA(r));

    return 0;
}

float tempConvert(float temp) {
    return (temp - 32) * 5/9;
}

float area(float h, float w) {
    return h * w;
}

float circleA(float r) {
    return 3.14 * r * r;
}