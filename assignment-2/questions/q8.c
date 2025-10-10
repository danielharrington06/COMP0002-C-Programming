// Written by Daniel Harrington
// This program makes an alternating pattern

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (!(i+j & 1)) { // check if even
                printf("*");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}