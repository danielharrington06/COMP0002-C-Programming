// Written by Daniel Harrington
// This program uses a for loop to output the 13 times tables

#include <stdio.h>

int main(void)
{
    for(int i = 1; i < 14; i++) {
        printf("%d * 13 = %d\n", i, i*13);
    }
    return 0;
}