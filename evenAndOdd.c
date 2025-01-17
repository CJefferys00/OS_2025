int main () {
    int x;

    printf("Enter a number: ");
    scanf("%d", x);
    
    if(x % 2 == 0) {
        printf("Your number is even");
    }
    else {
        printf("Your number is odd");
    }
}