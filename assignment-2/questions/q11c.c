// Written by Daniel Harrington
// This program prints all the prime numbers from 0 to 100

#include <stdio.h>

int main(void)
{
    // print in a 10x10 grid
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int number = i*10 + j + 1;
            // using sieve of eratosthenes
            if (number == 2 || number == 3 || number == 5 || number == 7) {
                printf(" %d ", number);
            }
            else if (number == 1 || number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) {
                printf("__ ");
            }
            else {
                printf("%d ", number);
            }
        }
        printf("\n");
    }
    return 0;
}