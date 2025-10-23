// Written by Daniel Harrington
// This program prints the squares of numbers from 1 to 100

#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i++ < 100) {
        printf("%d squared is %d\n", i, i*i);
    }
    return 0;
}