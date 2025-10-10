// Written by Daniel Harrington
// Prints 13 times tables up to 13*13 using a while loop

#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 13) {
        i++;
        printf("%d * 13 = %d\n", i, i*13);
    }
    return 0;
}