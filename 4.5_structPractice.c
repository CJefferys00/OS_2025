#include <stdio.h>

struct House {
    char address[100];
    int sqFeet;
    int beds;
    int baths;
    double price;
};

int main() {
    struct House h1 = {"101 python street", 1800, 3, 2, 25000000.00};
    struct House h2 = {"011 java blvd", 2200, 4, 3, 31000000.50};
    struct House h3 = {"111 css ave", 1500, 2, 1, 2000000.90};

    printf("House 1: \n");
    printf("Address: %s, Square Feet: %d, # Bedrooms: %d, # Bathrooms: %d, Price: $%.2f\n", h1.address, h1.sqFeet, h1.beds, h1.baths, h1.price);

    printf("House 2:\n");
    printf("Address: %s, Square Feet: %d, # Bedrooms: %d, # Bathrooms: %d, Price: $%.2f\n", h2.address, h2.sqFeet, h2.beds, h2.baths, h2.price);

    printf("House 3:\n");
    printf("Address: %s, Square Feet: %d, # Bedrooms: %d, # Bathrooms: %d, Price: $%.2f\n", h3.address, h3.sqFeet, h3.beds, h3.baths, h3.price);
}