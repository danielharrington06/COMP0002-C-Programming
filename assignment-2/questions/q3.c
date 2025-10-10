// Written by Daniel Harrington
// This program shows the 13 times table using a do while loop

#include <stdio.h>

int main(void)
{
    int i = 0;
    do {
        i++;
        printf("%d * 13 = %d\n", i, i*13);
    } while (i < 13);
}