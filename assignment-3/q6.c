// Written by Daniel Harrington
// This program takes a number and determines if it is prime

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsDivisible(int a, int b) {
    return a % b == 0;
}

int main(void)
{
    long int num = 0;
    bool prime = true;
    printf("Enter a number: ");
    scanf("%ld", &num);

    // using Sieve of Eratosthenes 
    // if a number n is not prime, its smallest prime factor is <= sqrt(n)

    double max = sqrt(num);

    for (int i = 2; i <= max; i++) {
        if (IsDivisible(num, i)) {
            prime = false;
            i = max+1;
        }
    }
    if (prime) {
        printf("%ld is prime\n", num);
    }
    else {
        printf("%ld is not prime\n", num);
    }
    return 0;
}