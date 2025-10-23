// Written by Daniel Harrington
// This program finds all the twin primes within a given range

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsDivisible(int a, int b) {
    return a % b == 0;
}

bool IsPrime(int num) {
    bool prime = true;
    // using Sieve of Eratosthenes 
    // if a number n is not prime, its smallest prime factor is <= sqrt(n)

    double max = sqrt(num);

    if (num % 2 == 0 && num != 2) {
        return false;
    }

    // check odd factors now
    for (int i = 3; i <= max; i+= 2) {
        if (IsDivisible(num, i)) {
            prime = false;
            i = max+1;
        }
    }
    return prime;
}

int main(void) 
{
    int max = 0;

    printf("This program finds all twin primes in a given range.\n");

    printf("Please enter the maximum number to search to: ");
    scanf("%d", &max);

    if (max >=3) {
        printf("2, 3\n");
    }

    int a = 0;
    int b = 0;

    for (int i = 5; i <= max; i+=2) {
        a = i;
        b = i+2;
        if(IsPrime(i) && IsPrime(i+2)) {
            printf("%d, %d\n", a, b);
            i += 2;
        }
    }
    return 0;
}