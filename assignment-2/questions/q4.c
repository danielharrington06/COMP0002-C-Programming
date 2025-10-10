// Written by Danie Harrington
// This program produces a pattern

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 4; i++) {
        printf("*");
        for (int j = 0; j < 3; j++) {
            if (i % 3 == 0) { // 0 and 3 are congruent mod 3
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("*\n");
    }
    return 0;
}