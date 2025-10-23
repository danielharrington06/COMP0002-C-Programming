// Written by Daniel Harrington
// This program prints the squares of the even numbers between 1 and 101

#include <stdio.h>

int main(void)
{
    int i = 2;
    while(i < 101) {
        printf("%d squared is %d\n", i, i*i);
        i = i + 2;
    }
    return 0;
}