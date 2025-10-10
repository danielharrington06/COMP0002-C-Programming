// Written by Daniel Harrington
// This program makes some squares in a pattern

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 8; j++) {
            if(i % 6 == 0 || j % 7 == 0) {
                printf("*");
            }
            else if (i % 2 == 0 && (j >= 2 && j <=5)) {
                printf("#");
            }
            else if(i == 3 && (j == 2 || j == 5)) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}