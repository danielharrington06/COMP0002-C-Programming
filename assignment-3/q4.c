// Written by Daniel Harrington
// This program calculates the product of all integers between a and b

#include <stdio.h>

long int CalcSeriesProduct(int a, int b) {
    int temp = 0;

    if (a > b) {
        // swap
        temp = a;
        a = b;
        b = temp;
    }

    // now calculate product
    long int product = a;

    for (int i = 1; i < b-a+1; i++) {
        product *= (a+i);
    }
    return product;
}

int main(void)
{
    int a = 0;
    int b = 0;
    printf("This program calculates the product of all integers between two given integers.\n");

    printf("Please enter an integer: ");
    scanf("%d", &a);
    printf("Please enter an integer: ");
    scanf("%d", &b);

    

    printf("The result is %ld\n", CalcSeriesProduct(a, b));
}